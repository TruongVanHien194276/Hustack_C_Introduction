// Problem: Tính số lần đổ xăng xe máy tối thiểu
// Description
// Giả sử xe máy của bạn có bình xăng dung tích <cap> lit, và công suất động cơ của bạn là <pow>km/l.
// Giả sử bạn cần đi phượt xuyên Việt bằng xe máy này với tổng quãng đường đi sẽ là <len>km
// Vậy bạn cần dừng và đổ xăng tối thiểu bao nhiêu lần?

// INPUT
// 4.5 50 2400
// OUTPUT
// 10

// Calculate Minimum Refueling Stops for a Motorcycle
// Assuming your motorcycle has a fuel tank capacity of <cap> liters and a fuel efficiency of <pow> km/l, and you need to travel a total distance of <len> km across Vietnam. How many minimum refueling stops will you need?
// INPUT
// 4.5 50 2400
// OUTPUT
// 10

#include <stdio.h>

int main(int argc, char const *argv[]){
    float cap, pow, len;
    scanf("%f %f %f", &cap, &pow, &len);
    printf("%d", (int)(len / (cap * pow)));
    return 0;
}