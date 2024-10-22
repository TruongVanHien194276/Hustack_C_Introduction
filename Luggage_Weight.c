// Problem: Cân nặng hành lý mang theo khi đi máy bay
// Description
// Theo quy định của hãng hàng không, khách hàng chỉ được mang hành lý xách tay (vali có khóa kéo hoặc thùng đồ) khối lượng không quá 7kg.
// Công ty lữ hành sẽ làm thủ tục check in cho n khách hàng của mình, và hãng hàng không sẽ phải cân hành lý xách tay của n người trong đoàn. Hãy xây dựng chương trình  kiểm tra và in ra số lượng hành lý quá cân cần phải bỏ bớt.

// Đầu vào sẽ là số lượng hành khách và cân nặng hành lý xách tay của từng kháchh
// Đầu ra sẽ là số lượng hành lý quá cân

// INPUT
// 5 8.6 7.2 5.4 6.7 3.5
// OUTPUT
// 2

// Trong 5 hành lý trên có 2 hành lý quá cân 

// INPUT
// 3 0.5 6 3.7
// OUTPUT
// 0


// Carry-on luggage weight for air travel.
// According to the airline regulations, passengers are allowed to carry hand luggage (a suitcase with a zipper or a small bag) weighing no more than 7kg.
// The travel company will check in for n of its passengers, and the airline will weigh the carry-on luggage of n people in the group. Please create a program to check and print the number of overweight carry-on luggage.
// The input will be the number of passengers and the weight of each passenger's carry-on luggage. The output will be the number of overweight carry-on luggage.
// INPUT 
// 5 8.6 7.2 5.4 6.7 3.5 
// OUTPUT 
// 2
// Out of the 5 pieces of carry-on luggage, 2 are overweight.
// INPUT 
// 3 0.5 6 3.7 
// OUTPUT
// 0

#include <stdio.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        float w;
        scanf("%f", &w);
        if (w > 7) cnt += 1;
    }

    printf("%d", cnt);

    return 0;
}