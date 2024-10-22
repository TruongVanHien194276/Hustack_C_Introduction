// Problem: Giá mở cửa, đóng cửa, cao nhất, thấp nhất của mã chứng khoán
// Description
// Trong 1 phiên giao dịch, giá của một mã chứng khoán sẽ dao động dựa trên giá khớp giữa mua và bán.
// Hãy viết chương trình nhập vào lịch sử  giá khớp  trong 1 phiên của 1 mã chứng khoán (dừng nhập khi nhận giá trị -1).
// In ra màn hình 4 giá trị là: giá mở cửa, đóng cửa, cao nhất, thấp nhất của mã đó
// Giá lấy tới 2 chữ số thập phân.

// INPUT
// 4.6 4.65 4.7 4.65 4.6 4.55 4.5 4.55 4.6 4.6 4.65 4.5 4.55 4.6 4.55 4.5 4.45 4.4 4.35 4.5 4.6 4.55 -1
// OUTPUT
// 4.6 4.55 4.7 4.35

// INPUT
// -1
// OUTPUT
// -1 -1 -1 -1

// Opening, closing, highest, and lowest stock prices.

// In a trading session, the price of a stock will fluctuate based on the matching prices between buying and selling. Please write a program to input the price history during a session of a stock (stop input when receiving a value of -1). Print on the screen 4 values: opening price, closing price, highest price, and lowest price for that stock. The prices are to be displayed with 2 decimal places.

// INPUT
// 4.60 4.65 4.70 4.65 4.6 4.55 4.50 4.55 4.6 4.6 4.65 4.5 4.55 4.6 4.55 4.5 4.45 4.4 4.35 4.5 4.6 4.55 -1
// OUTPUT
// 4.60 4.55 4.70 4.35

// INPUT
// -1
// OUTPUT
// -1 -1 -1 -1

#include <stdio.h>

int main(int argc, char const *argv[]) {
    float open = -1, close = -1, high = -1, low = -1;
    float price;
    int flag = 0;  

    while (1) {
        scanf("%f", &price);
        if (price == -1) break;

        if (!flag) {
            open = price;  
            high = price;
            low = price;
            flag = 1;  
        }
        close = price;  
        if (price > high) high = price;
        if (price < low) low = price;
    }

    if (!flag) printf("-1 -1 -1 -1\n");
    else printf("%.2f %.2f %.2f %.2f\n", open, close, high, low);

    return 0;
}
