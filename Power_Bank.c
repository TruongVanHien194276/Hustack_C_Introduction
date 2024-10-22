// Problem: Số lần sạc của box sạc dự phòng
// Description
// Một box sạc dự phòng có dung lượng là x mAh (ở điện áp định danh 3.7V). VD 10000mAh, 20000mAh.
// Điện thoại của bạn có dung lượng pin theo nhà sản xuất công bố là y mAh (ở điện áp định danh 3.8V). VD. 3000mAh, 5000mAh.
// Vậy dùng box sạc đó sạc cho điện thoại của bạn sẽ được tối đa bao nhiêu lần sạc đầy.
// Giả sử bạn không vừa dùng vừa sạc, và bạn chỉ sạc khi pin hết hoàn toàn.
// Biết rằng hiệu suất chuyển đổi của mạch điện là cỡ 75%

// Đầu vào là dung lượng của box sạc và của pin điện thoại
// Đầu ra là số lần sạc đầy điện thoại tối đa

// INPUT
// 10000 3000
// OUTPUT
// 3

// Calculate the Number of Charges for a Power Bank
// A power bank has a capacity of x mAh (at a rated voltage of 3.7V), for example, 10000mAh, 20000mAh.
// Your phone has a manufacturer-stated battery capacity of y mAh (at a rated voltage of 3.8V), for example, 3000mAh, 5000mAh.
// So, how many times can you charge your phone to full capacity using that power bank? Assume that you only charge when the phone's battery is completely depleted, and consider a circuit efficiency of approximately 75%.
// INPUT
// 10000 3000
// OUTPUT
// 3

#include <stdio.h>
#include <math.h> 

int main(int argc, char const *argv[]){
    int power, phone;
    scanf("%d %d", &power, &phone);

    float res = ((float)power / phone) * (3.7 / 3.8) * 0.75;
    printf("%d\n", (int)ceil(res));

    return 0;
}
