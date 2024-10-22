// Problem: Tính tiền cước vận chuyển hàng hóa nội tỉnh tại HN của GHN
// Description
// Tính tiền cước vận chuyển hàng hóa nội tỉnh tại HN của GHN

// Cước vận chuyển hàng hóa của GHN áp dụng cho nội tỉnh tại HN như sau
// Đơn hàng khối lượng không quá 0.5kg 
// + gửi nội thành 21000VND
// + Gửi huyện/xã 29000VND

// Nếu quá 0.5kg mỗi 0.5kg thêm sẽ tính thêm 2500VND/0.5kg
// VD. Nếu đơn hàng đó là 0.6kg và gửi nội thành thì cước sẽ là 21000 + 2500

// Xây dựng chương trình tính tiền cước gửi hàng cho nội tỉnh tại HN.
// Đầu vào là khối lượng tính tiền của kiện hàng
// Đầu ra sẽ là giá tiền cước ước tính cho nội thành và ngoại thành(huyện/xã)

// INPUT
// 0.6
// OUTPUT
// 23500-31500


// Calculate the shipping fee for intra-provincial cargo transportation in Hanoi by GHN.
// GHN's cargo transportation fee for intra-provincial shipments in Hanoi is as follows:
// For orders weighing up to 0.5kg:
// - Shipping within the city: 21,000 VND
// - Shipping to district/commune: 29,000 VND
// If the weight exceeds 0.5kg, an additional 2,500 VND per 0.5kg will be charged.
// Example: If the order weighs 0.6kg and is shipped within the city, the fee will be 21,000 + 2,500.

// Build a program to calculate the shipping fee for intra-provincial shipments in Hanoi.
// The input will be the weight used for calculating the cargo fee.
// The output will be the estimated shipping fees for within the city and to districts/communes (suburban areas).

// INPUT
// 0.6
// OUTPUT
// 23500-31500

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]){
    float weight;
    scanf("%f", &weight);

    int city = 21000, district = 29000;

    if (weight > 0.5){
        int add_fee = (int)ceil((weight - 0.5) / 0.5) * 2500;
        city += add_fee;
        district += add_fee;
    }

    printf("%d-%d", city, district);

    return 0;
}