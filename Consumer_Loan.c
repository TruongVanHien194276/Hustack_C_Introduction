// Problem: Tính tiền chênh lệch vay trả góp tiêu dùng
// Description
// Một cửa hàng bán điện thoại cho phép trả góp qua thẻ tín dụng như sau 

// + Khách hàng phải trả trước 0-10-20-30-40-50% của giá điện thoại 
// + Trả dần phần còn lại trong 3, 6, 9, 12, 18, 24 tháng với số tiền trả góp được chia nhỏ theo từng kỳ Thông báo giao dịch 

// Chỉ tốn thêm 1 khoản phí nhỏ, thu 1 lần duy nhất trong suốt kỳ hạn trả góp:  

// 1,49% đối với kỳ hạn 3 tháng (giá trị giao dịch tối thiểu 1.000.000 VND) 
// 2,49% đối với kỳ hạn 6 tháng (giá trị giao dịch tối thiểu 1.000.000 VND) 
// 3,49% đối với kỳ hạn 9 tháng (giá trị giao dịch tối thiểu 1.000.000 VND) 
// 4,49% đối với kỳ hạn 12 tháng (giá trị giao dịch tối thiểu 3.000.000 VND) 
// 6,49% đối với kỳ hạn 18 tháng (giá trị giao dịch tối thiểu 3.000.000 VND) 
// 8,49% đối với kỳ hạn 24 tháng (giá trị giao dịch tối thiểu 3.000.000 VND) 

// Hãy tính và in ra chênh lệch số tiền phải trả so với việc trả thẳng toàn bộ tiền cho sản phẩm. Nếu số tiền vay trả góp dưới hạn mức cho phép thì cần cảnh báo là gói vay đó KHÔNG thực hiện được bằng cách in ra giá trị -1. 

// VD. Vay trả góp 10tr với 0% trả trước trong 9 tháng thì chênh lệch tiền phải trả sẽ là 0.0349*10tr
// Kết quả in ra chỉ lấy phần nguyên

// Đầu vào: Tổng tiền sản phẩm, tỉ lệ trả trước và số tháng
// Đầu ra là chênh lệch tiền so với trả thẳng

// INPUT
// 1000000 0 12
// OUTPUT
// -1

// INPUT
// 10000000 0 60
// OUTPUT
// -1

// INPUT
// 5000000 30 3
// OUTPUT
// 52150



// Calculate the difference in the amount to be paid for a consumer installment loan.
// A phone store allows customers to purchase phones on installment plans using credit cards with the following terms:
// Customers must pay upfront 0-10-20-30-40-50% of the phone's price.
// The remaining amount is paid in installments over 3, 6, 9, 12, 18, or 24 months, with each installment amount specified in the transaction notification.
// Customers also incur a one-time fee during the installment period:
// 1.49% for a 3-month installment plan (minimum transaction value: 1,000,000 VND)
// 2.49% for a 6-month installment plan (minimum transaction value: 1,000,000 VND)
// 3.49% for a 9-month installment plan (minimum transaction value: 1,000,000 VND)
// 4.49% for a 12-month installment plan (minimum transaction value: 3,000,000 VND)
// 6.49% for an 18-month installment plan (minimum transaction value: 3,000,000 VND)
// 8.49% for a 24-month installment plan (minimum transaction value: 3,000,000 VND)
// Calculate and print the difference in the amount to be paid compared to paying the full amount upfront. If the loan amount is below the allowed minimum, print -1 as a warning.
// Example: If you finance 10 million VND for 9 months with 0% down payment, the difference in the amount to be paid is 0.0349 * 10 million. The result should be rounded to the nearest integer.
// Input: Total product price, down payment percentage, and number of months.
// Output: The difference in the amount compared to paying upfront.


// INPUT
// 1000000 0 12
// OUTPUT
// -1

// INPUT
// 5000000 30 3
// OUTPUT
// 52150

#include <stdio.h>

int Solve(int price, int percent, int month) {
    float fee;
    int trans;

    if (month == 3) {
        fee = 1.49;
        trans = 1000000;
    } else if (month == 6) {
        fee = 2.49;
        trans = 1000000;
    } else if (month == 9) {
        fee = 3.49;
        trans = 1000000;
    } else if (month == 12) {
        fee = 4.49;
        trans = 3000000;
    } else if (month == 18) {
        fee = 6.49;
        trans = 3000000;
    } else if (month == 24) {
        fee = 8.49;
        trans = 3000000;
    } else return -1;

    int down_payment = price * percent / 100;
    int remain = price - down_payment;

    if (remain < trans) return -1;

    int diff = (int)(remain * fee / 100 + 0.5);
    return diff;
}

int main(int argc, char const *argv[]){
    int price, percent, month;
    scanf("%d %d %d", &price, &percent, &month);

    int res = Solve(price, percent, month);
    printf("%d", res);
    
    return 0;
}

