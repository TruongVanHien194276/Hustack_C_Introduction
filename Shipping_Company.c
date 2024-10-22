// Problem: Kiểm tra hàng hóa gửi có đóng gói hợp lệ
// Description
// Một đơn vị vận chuyển quy định vế kích thước gửi hàng như sau
// + Bất kỳ chiều nào không vượt quá 150 cm
// + trọng lượng tối đa không quá 30kg
// + kích thước tối thiểu không dưới 10cm

// Viết chương trình nhập vào kích thước 3 chiều (theo cm) và cân nặng(theo kg), in ra màn hình xem kiện hàng đó có được chấp nhận gửi hay không. Nếu chấp nhận thì in ra OK và từ chối in ra DENY

// INPUT
// 18 12 35 3.57
// OUTPUT
// OK

// INPUT
// 180 12 35 3.57
// OUTPUT
// DENY


// A shipping company has the following rules for the dimensions of shipped goods:
// - No dimension should exceed 150 cm.
// - The maximum weight should not exceed 30 kg.
// - The minimum dimension should not be less than 10 cm.
// Write a program that takes the three dimensions (in cm) and weight (in kg) as input and prints on the screen whether the shipment is accepted for sending or not. If accepted, print "OK," and if rejected, print "DENY."

// INPUT
// 18 12 35 3.57
// OUTPUT
// OK

// INPUT
// 180 12 35 3.57
// OUTPUT
// DENY

#include <stdio.h>

int main(int argc, char const *argv[]){
    float length, width, height, weight;
    scanf("%f %f %f %f", &length, &width, &height, &weight);

    if ((length <= 150 && width <= 150 && height <= 150) && 
        (weight <= 30) && 
        (length >= 10 && width >= 10 && height >= 10)) {
        printf("OK");
    } else printf("DENY");

    return 0;
}
