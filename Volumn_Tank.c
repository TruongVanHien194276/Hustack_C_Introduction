// Problem: IT1018_Bai1_5-Tính thể tích bể nước mưa
// Description
// Lượng mưa sau mỗi đợt mưa đo được tính theo mm là độ dày nước mưa trên mỗi đơn vị diện tích (nước mưa không bị thấm hoặc bay hơn).
// Ví dụ. Nếu người dân dùng bể 2m3, có diện tích mặt hứng nước mưa là 10m2, sau cơn mưa lượng mưa đo được 100mm thì thể tích nước trong bể sẽ là 10 x 0.1 = 1 m3 ( 1 mét khối).
// Hãy viết chương trình tính toán lượng nước mưa thu được trong bể sau cơn mưa

// INPUT
// 2.3 25.5 125
// OUTPUT
// 2.30

// Giải thích:
// Đầu vào gồm 2.3m3 là thể tích tối đa của bể, 25.5m2 là diện tích hứng nước mưa, 125mm là lượng mưa đo được
// Đầu ra thể tích nước mưa hứng được trong bể là 2.30m3
// Đầu ra lấy đến 2 chữ số thập phân.

#include <stdio.h>

int main(int argc, char const *argv[]){
    double V, S, R;
    scanf("%lf %lf %lf", &V, &S, &R);

    double res = S * R / 1000;
    if (res > V) res = V;

    printf("%.2lf", res);
    return 0;
}