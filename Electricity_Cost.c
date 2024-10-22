// Problem: Tính tiền điện tiêu thụ của thiết bị
// Description
// Một thiết bị điện có công suất x kwh  (ví dụ tủ lạnh công suất 100Wh sẽ là 0.1kwh), được sử dụng liên tục trung bình n tiếng mỗi ngày trong tháng 30 ngày. Hãy tính số tiền điện sẽ phải trả cho riêng thiết bị đó với giá tiền điện tính theo công thức bậc thang dạng 
// Giá bán lẻ điện sinh hoạt

// Bậc 1: Cho kWh từ 0 - 50   	1.678
// Bậc 2: Cho kWh từ 51 - 100  	1.734
// Bậc 3: Cho kWh từ 101 - 200	2.014
// Bậc 4: Cho kWh từ 201 - 300	2.536
// Bậc 5: Cho kWh từ 301 - 400	2.834
// Bậc 6: Cho kWh từ 401 trở lên	2.927

// VD. Tủ lạnh 100W cắm 24/24 sẽ có tổng điện tiêu thụ trong cả tháng là  
// 0.1*24*30 = 72kwh 
// và số tiền phải trả sẽ là 50kwh đầu với giá 1678d 
// 22kwh tiếp theo với giá 1734d 

// Tiền phải trả sẽ phải cộng thêm thuế VAT (hiện tại là 8% nữa) 

// Tổng tiền phải trả sẽ là (50*1678 + 22*1734)*1.08 = 131811.84 VND 

// Đầu vào: Công suất tiêu thụ trung bình (theo kWh) và thời gian sử dụng trong ngày (theo giờ)
// Đầu ra là số tiền phải trả (lấy tới 2 chữ số thập phân)

// INPUT
// 0.1 24
// OUTPUT
// 131811.84


// Calculate the electricity cost for a device.
// A electrical device has a power consumption of x kWh (e.g., a refrigerator with a power of 100W is 0.1 kWh), and it is used continuously for an average of n hours per day over 30 days in a month. Calculate the amount of money you have to pay for that device using the stepped pricing formula:
// Retail price of household electricity
// Tier 1: For kWh from 0 - 50      1.678
// Tier 2: For kWh from 51 - 100    1.734
// Tier 3: For kWh from 101 - 200   2.014
// Tier 4: For kWh from 201 - 300   2.536
// Tier 5: For kWh from 301 - 400   2.834
// Tier 6: For kWh over 400         2.927
// Example: A 100W refrigerator running 24/24 will consume a total of 72 kWh in a month, and the cost will be calculated as follows:
// The first 50 kWh at a rate of 1678 VND per kWh
// The next 22 kWh at a rate of 1734 VND per kWh
// The total cost is calculated, including 8% VAT:
// Total cost = (50 * 1678 + 22 * 1734) * 1.08 = 131811.84 VND
// Input: Average power consumption (in kWh) and daily usage time (in hours).
// Output: The amount of money to be paid (rounded to 2 decimal places).

// INPUT
// 0.1 24
// OUTPUT
// 131811.84

#include <stdio.h>

int main(int argc, char const *argv[]){
    double power, hour;
    scanf("%lf %lf", &power, &hour);

    double total = power * hour * 30;
    double cost = 0, VAT = 1.08;

    if (total > 400) cost += (total - 400) * 2927, total = 400;
    if (total > 300) cost += (total - 300) * 2834, total = 300;
    if (total > 200) cost += (total - 200) * 2536, total = 200;
    if (total > 100) cost += (total - 100) * 2014, total = 100;
    if (total > 50)  cost += (total - 50)  * 1734, total = 50;
    cost += total * 1678;

    cost *= VAT;

    printf("%.2f", cost);
    return 0;
}
