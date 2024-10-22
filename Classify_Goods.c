// Problem: Phân loại hàng hóa khi gửi hàng theo kích thước
// Description
// Phân loại hàng hóa khi gửi hàng theo kích thước

// – Hàng hóa thông thường: là bưu kiện gửi có bất kỳ chiều nào không quá 1.5m, kích thước hai chiều còn lại tối thiểu là 0.1(m) tức là 10 (cm).
// Trọng lượng tối đa mỗi kiện là 30kg.

// – Hàng hóa quá khổ: là bưu kiện gửi có một chiều của bưu gửi ≥ 1.5m, hoặc trọng lượng hơn 30kg . Cụ thể :

// L, W, H ≥ 1,5m

// hoặc
// L + (W+H)*2 ≥ 3m
// W + (L+H)*2 ≥ 3m
// H + (L+W)*2 ≥ 3m

// Viết chương trình nhập vào kích thước 3 chiều (tính theo m) và cân nặng của kiện hàng (theo kg).
// Nếu là kiện hàng thông thường thì in ra - NORMAL, kiện hàng quá khổ thì in ra ABNORMAL, còn nếu không nằm trong 2 loại trên in ra OTHER

// INPUT
// 0.23 0.8 0.12 3.4
// OUTPUT
// NORMAL


// INPUT
// 0.3 1.8 0.52 34.5
// OUTPUT
// ABNORMAL


// INPUT
// 0.03 0.18 0.52 405
// OUTPUT
// OTHER



// Classify goods when shipping based on dimensions
// Regular goods: These are shipments with no dimension exceeding 1.5 meters, and the minimum dimension in the other two directions is at least 0.1 meters (10 cm). The maximum weight per item is 30 kg.
// Oversized goods: These are shipments where at least one dimension of the item is ≥ 1.5 meters, or the weight is more than 30 kg. Specifically:
// L, W, H ≥ 1.5m
// or
// L + (W+H)*2 ≥ 3m
// W + (L+H)*2 ≥ 3m
// H + (L+W)*2 ≥ 3m
// Write a program that takes the three dimensions (in meters) and the weight of the item (in kg) as input. If it's a regular item, print "NORMAL." If it's an oversized item, print "ABNORMAL." If it doesn't fall into either category, print "OTHER."
// INPUT
// 0.23 0.8 0.12 3.4
// OUTPUT
// NORMAL
// INPUT
// 0.3 1.8 0.52 34.5
// OUTPUT
// ABNORMAL
// INPUT
// 0.03 0.18 0.52 405
// OUTPUT
// OTHER

#include <stdio.h>

int main(int argc, char const *argv[]){
    double d, r, c, w;
    scanf("%lf %lf %lf %lf", &d, &r, &c, &w);

    if (w > 30) {
        if (d < 0.1 || r < 0.1 || c < 0.1) printf("OTHER");
        else printf("ABNORMAL");
    } else {
        if (d < 0.1 || r < 0.1 || c < 0.1) printf( "OTHER");
        else if (d>=1.5 || r>=1.5 || c>=1.5) printf( "ABNORMAL");
        else printf("NORMAL");
    }

    return 0;
}