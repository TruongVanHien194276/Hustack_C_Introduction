// Problem: Tính tiền gửi xe trong ngày theo giờ lấy
// Description
// Quy định của 1 bãi gửi xe máy như sau
// + KHÔNG gửi xe qua đêm
// + Lấy xe trước 18h00 giá vé là 5000/xe
// + lấy xe từ 18h00 giá vé là 8000K/xe

// Hãy viết chương trình nhập vào thời gian gửi và lấy xe trong ngày dạng HH:MM
// Nếu thời gian gửi > thời gian lấy xe (thời gian nhập vào lỗi) thì in ra giá trị -1
// Nếu thời gian gửi = thời gian lấy xe thì in ra là 0
// ngược lại thì tính theo công thức ở trên

// INPUT
// 12:00 13:35
// OUTPUT
// 5000

// INPUT
// 12:00 11:35
// OUTPUT
// -1


// Calculate the parking fee based on the pick-up time.
// The regulations for a motorbike parking lot are as follows:
// + Do NOT park overnight.
// + Pick up the vehicle before 18:00, the ticket price is 5000 VND/vehicle.
// + Pick up the vehicle from 18:00 onwards, the ticket price is 8000 VND/vehicle.
// write a program to input the entry and exit times in the format HH:MM.
// If the entry time is greater than the exit time (input time error), then output the value -1.
// If the entry time is equal to the exit time, then output 0.
// Otherwise, calculate according to the formula above.

// INPUT
// 12:00 13:35
// OUTPUT
// 5000

// INPUT
// 12:00 11:35
// OUTPUT
// -1

#include <stdio.h>

int main(int argc, char const *argv[]) {
    char entry[6], exit[6];
    scanf("%s %s", entry, exit);

    int entry_h, entry_m, exit_h, exit_m;
    sscanf(entry, "%d:%d", &entry_h, &entry_m);
    sscanf(exit, "%d:%d", &exit_h, &exit_m);

    if (entry_h > exit_h || (entry_h == exit_h && entry_m > exit_m)) {
        printf("-1");
    } else if (entry_h == exit_h && entry_m == exit_m) {
        printf("0");
    } else {
        int fee = (exit_h < 18) ? 5000 : 8000;
        printf("%d", fee);
    }

    return 0;
}