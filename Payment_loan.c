// Problem: Tính tổng tiền phải trả hàng tháng cho khoản vay lãi khấu trừ
// Description
// Một người muốn mua nhà ở HN nên đã chấp nhận khoản vay khấu trừ m của ngân hàng với lãi suất cố định r%/năm trong suốt thời gian là d năm.
// Hàng tháng người mua sẽ phải trả cả tiền vay gốc lẫn tiền lãi như sau
// Tiền trả gốc hàng tháng cố định sẽ là m/(d*12)
// Tiền lãi cho khoản vay hàng tháng sẽ được tính trên khoản tiền gốc còn phải trả 
// VD. Tháng đầu sẽ là m*r/12
// Tháng tiếp theo chỉ còn (m-m/(d*12)) *r/12
// và các tháng tiếp theo sẽ giảm dần 

// Hãy viết chương trình nhận vào  số tiền vay ban đầu, lãi suất cố định  và thời gian vay
// In ra màn hình tổng số tiền phải trả hàng tháng trong suốt d năm và chênh lệch giữa tổng phải trả so với khoản vay ban đầu.
// Các giá trị in ra là số thực lấy đền 2 chữ số thập phân  
 
// INPUT
// 1000000000 0.11 10
// OUTPUT
// 1554583333.33 554583333.33


// Calculate the total monthly payment and the difference from the initial loan amount for a fixed-rate mortgage.
// A person wants to buy a house in Hanoi and has accepted a fixed-rate mortgage from a bank for an initial loan amount of m with an annual interest rate of r% for a duration of d years. Each month, the buyer will have to pay both the principal and the interest as follows:
// The fixed monthly principal payment will be m / (d * 12).
// The monthly interest payment will be calculated based on the remaining principal amount.For the first month, it will be (m * r / 12).
// For the following months, it will be ((m - m / (d * 12)) * r / 12), and so on, decreasing over time.

// Please write a program that takes the initial loan amount, the fixed interest rate, and the loan duration as input and prints on the screen the total monthly payment over d years and the difference from the initial loan amount. The values should be displayed as floating-point numbers rounded to 2 decimal places.
// INPUT 
// 1000000000 0.11 10 
// OUTPUT 
// 1554583333.33 554583333.33

#include <stdio.h>

int main(int argc, char const *argv[]){
    double m, r, d;
    scanf("%lf %lf %lf", &m, &r, &d);

    double total = 0;
    double principal = m / (d * 12);
    for (int i = 0; i < d * 12; i++) {
        double interest = (m - principal * i) * r / 12;
        total += principal + interest;
    }

    printf("%.2lf %.2lf", total, total - m);

    return 0;
}