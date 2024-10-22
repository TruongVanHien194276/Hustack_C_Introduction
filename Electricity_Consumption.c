// Problem: Tính lượng điện tiêu thụ trong tháng
// Description
// Nhập vào công suất định danh của một máy lạnh theo Wh và thời gian sử dụng trung bình theo ngày. Hãy tính số điện mà  máy lạnh đó sẽ tiêu thụ trong 1 tháng (1 tháng gồm 30 ngày) theo kWh.

// Đầu ra lấy đến 2 chữ số thập phân

// INPUT
// 1500 2.5
// OUTPUT
// 112.50


// Calculate Monthly Electricity Consumption

// Enter the rated power of an air conditioner in Wh and the average daily usage time. Calculate the amount of electricity that the air conditioner will consume in 1 month (1 month equals 30 days) in kWh.
// The output is rounded to two decimal places.

// INPUT
// 1500 2.5
// OUTPUT
// 112.50

#include <stdio.h>

int main(int argc, char const *argv[]){
    float power, time;
    scanf("%f %f", &power, &time);
    printf("%.2f", power * time * 30 / 1000);
    return 0;
}