// roblem: Tính tiền hàng đã trừ số lượng sản phẩm khuyến mãi tặng kèm
// Description
// Mỗi sản phẩm nước giặt cửa hàng bán ra cho người tiêu dùng là giá X VND.
// Cửa hàng có chương trình khuyến mua 10 sản phẩm (không tính sản phẩm tặng thêm) sẽ được tặng thêm 1 sản phẩm.
// Khách hàng cần mua n sản phẩm, hãy tính tiền khác hàng phải trả cho n sản phẩm đó

// Đầu vào là giá tiền 1 sản phẩm và số lượng sản phẩm khách mua
// Đầu ra sẽ là tiền khách hàng phải trả (lấy tới 2 chữ số thập phân)

// INPUT
// 50000 12
// OUTPUT
// 550000.00

// INPUT
// 50000 10
// OUTPUT
// 500000.00

// Calculate Total Cost after Subtracting Quantity of Free Promotional Products
// Each laundry detergent product sold by the store to consumers costs X VND.
// The store has a promotion: for every 10 products purchased (excluding the additional free ones), you get 1 product for free.
// The customer wants to buy n products. Calculate the total amount the customer has to pay for those n products.
// INPUT
// 50000 12
// OUTPUT
// 550000.00
// INPUT
// 50000 10
// OUTPUT
// 500000.00

#include <stdio.h>

int main(int argc, char const *argv[]){
    int price, quantity;
    scanf("%d %d", &price, &quantity);

    float cost = price * (quantity - quantity / 11);
    printf("%.2f\n", cost);

    return 0;
}