// Problem: Bán hàng
// Description
// Một cửa hàng cập nhật bảng giá của từng sản phẩm trong ngày theo dạng
// <mã sản phẩm> <giá tiền VND>
// Khi khác hàng mua hàng chỉ cần nhập lần lượt mã sản phẩm và số lượng sản phẩm đó trong giỏ hàng thì tổng tiền sẽ được tính và in ra màn hình.
// Hãy viết chương trình C thực hiện việc đó với dữ liệu cho dạng

// INPUT
// 12012 3500
// 12013 6500
// 12015 7000
// 12101 9000
// -1
// 2
// 12015 1
// 12101 2

// OUTPUT
// 25000

// Giải thích
// Các dòng đầu vào sẽ là mã sản phẩm (kiểu xâu ký tự độ dài 5 ký tự(chữ cái hoặc chữ số), viết liền không có cách trống) và giá của sản phẩm đó (số nguyên)
// Kết thúc thông tin giá sản phẩm sẽ là mã -1
// Dòng tiếp sẽ là số lượng mã sản phẩm trong giỏ hàng
// Các dòng sau đó lần lượt là mã sản phẩm và số lượng

// Đầu ra là tổng tiền của giỏ hàng
// 1 sản phẩm mã 12015 và 2 sản phẩm mã 12101 sẽ có tổng tiền là 7000 + 9000*2 = 25000

#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char id[6];
    int price;
} Product;

int main(int argc, char const *argv[]){
    Product a[MAX];
    int cnt = 0;

    while (1) {
        char id[6];
        int price;
        scanf("%s", id);

        if (strcmp(id, "-1") == 0) break; 

        scanf("%d", &price);
        strcpy(a[cnt].id, id);
        a[cnt].price = price;
        cnt++;
    }

    int cartCount;
    scanf("%d", &cartCount);

    int cost = 0;
    for (int i = 0; i < cartCount; i++) {
        char cartid[6];
        int quantity;
        scanf("%s %d", cartid, &quantity);

        for (int j = 0; j < cnt; j++) {
            if (strcmp(a[j].id, cartid) == 0) {
                cost += a[j].price * quantity;
                break;
            }
        }
    }

    printf("%d\n", cost);

    return 0;
}
