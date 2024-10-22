// Description
// Giả sử một đoàn du lịch gồm n người lớn dự định mua vé máy bay giá rẻ để đi du lịch và dịp lễ. 

// Hãng hàng không chỉ cho phép mỗi người mang tối đa 7kg hành lý xách tay, còn lại là phải mua thêm khối lượng hành lý ký gửi với mức giá là 120k/5kg và 220k/10 kg.  Mỗi người chỉ được phép mua thêm 1 gói khối lượng hành lý ký gửi. 

// Giả sử đoàn dự định mang theo quà đi tặng với kích thước là m kg.  

// Hãy tính cách chia hành lý cho từng người và số lượng hành lý ký gửi phải mua thêm là bao nhiêu để cho tổng tiền phải trả thêm là nhỏ nhất.

// ĐẦu vào sẽ là số lượng người và tổng cân nặng của quà
// Đầu ra sẽ là cân nặng cần phải mua thêm, nếu quá số lượng cho phép thì in ra là -1
 
// INPUT
// 2 20
// OUTPUT
// 5:0 10:1

// INPUT
// 2 10
// OUTPUT
// 5:0 10:0

// INPUT
// 3 55
// OUTPUT
// 5:-1 10:-1


// Calculate the additional weight to buy when traveling by plane.
// Suppose a travel group consists of n adults planning to purchase cheap airline tickets for travel and holidays.
// The airline allows each person to carry a maximum of 7kg of carry-on luggage. Any additional luggage weight must be purchased at a rate of 120k/5kg and 220k/10kg. Each person is allowed to purchase only one package of additional checked luggage.
// Assume the group plans to bring gifts with a total weight of m kg.
// Calculate how to distribute the luggage for each person and how much additional checked luggage needs to be purchased to minimize the total additional cost.
// The input will be the number of people and the total weight of gifts.
// The output will be the additional weight to be purchased. If it exceeds the allowed amount, print -1.

// INPUT
// 2 20
// OUTPUT
// 5:0 10:1

// INPUT
// 2 10
// OUTPUT
// 5:0 10:0

// INPUT
// 3 55
// OUTPUT
// 5:-1 10:-1

#include <stdio.h>

int main(int argc, char const *argv[]){
    int n, m;
    scanf("%d %d", &n, &m);
    
    int carry = 7 * n;
    int remain = m - carry;
    
    if (remain <= 0) {
        printf("5:0 10:0");
        return;
    }

    int W5 = (remain + 4) / 5;
    int W10 = W5 / 2;
    W5 = W5 % 2;

    if (W10 > n || (W10 == n && W5 > 0)) printf("5:-1 10:-1\n");
    else printf("5:%d 10:%d", W5, W10);

    return 0;
}
