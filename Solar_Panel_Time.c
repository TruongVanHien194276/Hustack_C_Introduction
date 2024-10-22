// Problem: Tính thời gian hoàn vốn của hệ thống điện mặt trời
// Description
// Hệ thống điện mặt trời 5kw sẽ có giá thành lắp đặt tầm 70tr. 
// Nếu lắp đặt tại miền bắc với điều kiện trung bình 3-5h có nắng đủ công suất tối đa (5kw thì mỗi giờ nắng tối đa sẽ tạo ra lớn nhất 5kwh điện). 
// Giá mua điện mặt trời 2022 sẽ là 1.939 VNĐ/kWh, vậy sẽ mất trong khoảng tầm bao nhiêu năm để thu hồi vốn  

// Tính trung bình 1 năm ở miền bắc có n ngày nắng (coi lượng trong ngày nắng là như nhau) 

// Đầu vào là số ngày nắng
// Đầu ra là số năm tối thiểu để thu hồi vốn

// INPUT
// 120
// OUTPUT
// 13


// Calculate Solar Panel System Payback Time
// A 5 kW solar panel system costs approximately 70 million VND to install. If it's installed in the northern region where there are, on average, 3-5 hours of sufficient sunlight per day (with a maximum output of 5 kW per hour), and the price of solar electricity in 2022 is 1.939 VND/kWh, how many years will it take to recoup the investment?
// Calculate the average number of sunny days in a year in the northern region, assuming equal sunlight production on those days.
// INPUT
// 120
// OUTPUT
// 13

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
    int day;
    scanf("%d", &day);

    float res = (float)70000000 / (25 * day * 1.939 * 1000);
    printf("%d\n", (int)ceil(res));

    return 0;
}

