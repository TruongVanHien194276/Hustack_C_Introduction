// Problem: Tính kích thước hàng hóa quy đổi khi gửi GHN
// Description
// Với các hàng hóa cồng kềnh, bên vận chuyển có công thức tính khối lượng quy đổi dạng như sau

// Khối lượng quy đổi (kg) = dài(cm) x rộng(cm) x cao(cm) / 5000

// Cân nặng tính tiền sẽ là giá trị lớn hơn giữa trọng lượng tĩnh và khối lượng quy đổi
// Viết chương trình đầu vào sẽ là kích thước 3 chiều (theo cm) và cân nặng tĩnh (kg) của kiện hàng
// In ra cân nặng tính tiền của kiện hàng đó (lấy tới 2 chữ số thập phân)

// INPUT
// 12.5 15 30.4 10.5
// OUTPUT
// 10.50


// Calculate the converted size of goods when sending via GHN
// For bulky goods, the carrier has a formula to calculate the converted weight as follows:
// Converted Weight (kg) = length (cm) x width (cm) x height (cm) / 5000
// The chargeable weight will be the larger value between the static weight and the converted weight.
// Write a program where the input will be the three-dimensional size (in cm) and the static weight (in kg) of the item.
// Print out the chargeable weight of that item (rounded to 2 decimal places).

// INPUT
// 12.5 15 30.4 10.5
// OUTPUT
// 10.50

#include <stdio.h>

int main(int argc, char const *argv[]){
    float length, width, height, weight;
    scanf("%f %f %f %f", &length, &width, &height, &weight);

    float converted_weight = length * width * height / 5000;
    float res = (converted_weight > weight) ? converted_weight : weight;
    printf("%.2f", res);

    return 0;
}