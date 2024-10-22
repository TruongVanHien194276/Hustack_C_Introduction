// Problem: Tính tổng tiền vé vào cửa khi thăm quan công viên Thủ Lệ theo đoàn
// Description
// Giá vé vào Công Viên Thủ Lệ được quy định như sau: 
// Giá vé vào cửa người lớn và trẻ em trên 1m3 (hoặc trên 6 tuổi): 30.000đ/Vé/lượt; 
// Giá vé vào cửa với trẻ em từ 1m3 trở xuống (hoặc dưới 6 tuổi): 20.000đ/Vé/lượt

// Trưởng đoàn du lịch mua vé vào cửa cho tất cả đoàn, thông tin cung cấp cho bộ phận bán vé là chiều cao của từng thành viên trong đoàn.
// Hãy in ra tổng tiền vé của cả đoàn.

// Đầu vào là danh sách chiều cao của từng thành viên trong đoàn, kết thúc là 0
// Đầu ra là tổng tiền vé 
 
// INPUT
// 1.23 1.3 1.6 1.67 1.2 1.2 0.95 1.65 0
// OUTPUT
// 190000


// Calculate the total ticket price for a group visit to Thu Le Park.
// The ticket prices for entering Thu Le Park are as follows:
// Ticket price for adults and children over 1m3 (or over 6 years old): 30,000 VND/ticket/visit.
// Ticket price for children under 1m3 (or under 6 years old): 20,000 VND/ticket/visit.
// The travel group leader buys tickets for the entire group, providing the ticket sales department with the height of each member in the group. Please print the total ticket price for the entire group.
// The input consists of a list of heights of each member in the group, and it ends with a 0. The output is the total ticket price.
// INPUT 
// 1.23 1.3 1.6 1.67 1.2 1.2 0.95 1.65 0 
// OUTPUT 
// 190000 

#include <stdio.h>

int main(int argc, char const *argv[]){
    float h;
    int total = 0;
    int adult_price = 30000, child_price = 20000; 

    while (1) {
        scanf("%f", &h);
        if (h == 0) break;

        if (h > 1.3) total += adult_price; 
        else total += child_price; 
    }

    printf("%d", total);
    return 0;
}
