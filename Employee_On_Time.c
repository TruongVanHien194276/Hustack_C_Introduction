// Problem: Kiểm tra nhân viên có đi làm đúng giờ
// Description
// Một công ty có quy định thời gian làm việc của nhân viên như sau
// Giờ bắt đầu từ làm việc 8h (cho phép chấm công muộn nhất trước 8h15', sau thời gian này coi như nghỉ buổi sáng - mất 4h làm việc)
// Nếu thời gian bắt đầu chấm công sau 13h30 coi như là nghỉ cả ngày.
// Giờ kết thúc làm việc 17h30 (nếu chấm công sớm hơn thời điểm này 15' được coi là về sớm, và coi như buổi chiều - mất 4h)
// Hãy nhập vào thời giểm chấm công vào và thời điểm ra của nhân viên.
// Tính và in ra thời gian làm việc của ngày hôm đó
// Thời gian tính theo HH:MM

// INPUT
// 8:05  17:15
// OUTPUT
// 8

// INPUT
// 8:55  17:15
// OUTPUT
// 4

// INPUT
// 8:15  17:03
// OUTPUT
// 4

// INPUT
// 13:35  17:03
// OUTPUT
// 0


// Check if an employee arrives at work on time.

// A company has the following rules for employee working hours:

// Work starts at 8:00 AM (late clock-in is allowed up to 8:15 AM, after this time, the morning shift is considered as absent - 4 hours of work lost).
// If the clock-in time is after 1:30 PM, it is considered a full-day absence.
// Work ends at 5:30 PM (if clocking out earlier than this by 15 minutes, it's considered leaving early, and the afternoon shift is considered absent - 4 hours of work lost).
// Please input the clock-in time and clock-out time of the employee.
// Calculate and print the total working hours for that day.
// The time should be displayed in HH:MM format.

// INPUT
// 8:05  17:15
// OUTPUT
// 8

// INPUT
// 8:55  17:15
// OUTPUT
// 4

// INPUT
// 8:15  17:03
// OUTPUT
// 4

// INPUT
// 13:35  17:03
// OUTPUT
// 0

#include <stdio.h>
#include <stdlib.h>

int convert(char s[]){
    int h = 0, m = 0;
    sscanf(s, "%d:%d", &h, &m);
    return h * 60 + m;
}

int main(int argc, char const *argv[]){
    char start[6], end[6];
    scanf("%s %s", start, end);
    int s = convert(start);
    int e = convert(end);

    int morning_start = 8 * 60; // 8:00 AM 
    int morning_end = 8 * 60 + 15; // 8:15 AM 
    int afternoon_start = 13 * 60 + 30; // 13:30 PM 
    int work_end = 17 * 60 + 30; // 17:30 PM 
    int early_leave = work_end - 15; // 17:15 

    int total_hour = 8; // total working hour
    int lost_hour = 0;

    if (s > morning_end) lost_hour += 4; 
    if (s > afternoon_start) lost_hour = total_hour;
    if (e < early_leave) lost_hour += 4; 

    int worked_hours = total_hour - lost_hour;
    printf("%d", worked_hours);

    return 0;
}