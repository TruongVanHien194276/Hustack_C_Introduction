// Problem: Thời gian gửi ngân hàng để được nhân đôi tổng tiền
// Description
// Một ngân hàng thương mại có lãi suất gửi cho tiền VND là r%/năm. Giả sử người dân muốn gửi lượng tiền là 100tr thì phải mất ít nhất bao nhiêu năm để thu được 200tr. 
// Ta tạm bỏ qua các yếu tố về lạm phát và biến động lãi suất trong quá trình gửi

// Đầu vào là lãi suất tiền gửi lấy tới 2 chữ số thập phân
// Đầu ra là số năm tối thiểu để tăng gấp 2 tiền ban đầu

// INPUT
// 12.00
// OUTPUT
// 7

// Calculate Time to Double the Total Amount in a Bank
// A commercial bank offers an interest rate for VND deposits at r% per year. Suppose a person wants to deposit 100 million VND, how many years will it take to receive at least 200 million VND?
// We temporarily ignore factors like inflation and interest rate fluctuations during the deposit period.
// INPUT
// 12.00
// OUTPUT
// 7

#include <stdio.h>

int main(int argc, char const *argv[]){
    double r;
    scanf("%lf", &r);

    double total = 100;
    int year = 0;
    while (total < 200) {
        total += total * r / 100;
        year += 1;
    }

    printf("%d", year);

    return 0;
}