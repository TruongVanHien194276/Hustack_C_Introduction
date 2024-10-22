// Problem: Kiểm tra 1 mã Barcode có đúng chuẩn EAN-13
// Description
// Tất cả các loại hàng hóa lưu thông trên thị trường đều cần phải có mã vạch. Mã vạch giống như một “Chứng minh thư” của hàng hoá, giúp ta phân biệt được nhanh chóng và chính xác các loại hàng hoá khác nhau.
// Mã vạch của hàng hoá bao gồm hai phần: mã số của hàng hoá để con người nhận diện và phần mã vạch chỉ để dành cho các loại máy tính, máy quét đọc đưa vào quản lý hệ thống.
// Hiện nay ở Việt Nam, hàng hóa trên thị trường hầu hết áp dụng chuẩn mã vạch EAN của Tổ chức mã số vật phẩm quốc tế – EAN International với 13 con số, chia làm 4 nhóm, có cấu tạo và ý nghĩa từ trái qua phải như sau (như hình minh họa dưới):
// XXXYYYYZZZZZC
// Nhóm 1-XXX: Từ trái sang phải, ba chữ số đầu là mã số về quốc gia (vùng lãnh thổ)
// Nhóm 2-YYYY: Tiếp theo gồm bốn chữ số là mã số về doanh nghiệp.
// Nhóm 3-ZZZZZ: Tiếp theo gồm năm chữ số là mã số về hàng hóa.
// Nhóm 4-C: Số cuối cùng (bên phải) là số về kiểm tra.

// Mã quốc gia của VN là 893

// Sau khi biết được nguồn gốc xuất xứ, ta kiểm tra tính hợp lệ của mã vạch đó. Nếu kiểm tra không hợp lệ bước đầu có cơ sở để kết luận nghi ngờ đây là hàng giả, hàng nhái.

// Nguyên tắc kiểm tra:
// Lấy tổng các con số hàng chẵn nhân 3 cộng với tổng với các chữ số hàng lẻ (trừ số thứ 13 ra, số thứ 13 là số để kiểm tra, đối chiếu). Sau đó lấy kết quả cộng với số thứ 13, nếu tổng có đuôi là 0 là mã vạch hợp lệ, còn nếu khác 0 là không hợp lệ, bước đầu nghi ngờ hàng giả, hàng nhái.

// Hãy nhập vào 1 mã vạch 13 chữ số
// Kiểm tra xem đó có phải là mã sản phẩm hợp lệ xuất xứ từ VN hay không
// Nếu đúng thì in ra 1, ngược lại in ra 0

// INPUT
// 8941234123459
// OUTPUT
// 0

// INPUT
// 8935001813286
// OUTPUT
// 1


// Check if a Barcode is in the correct EAN-13 standard.
// All products circulating in the market must have a barcode. The barcode is like an "ID card" for the product, allowing us to quickly and accurately distinguish between different types of products. A product's barcode consists of two parts: a product number for human identification and a barcode part reserved for computer systems and scanners.
// In Vietnam, most products in the market adhere to the EAN barcode standard of the International Article Numbering Association (EAN International) with 13 digits, divided into 4 groups, structured and meaning as follows (as illustrated below):
// XXXYYYYZZZZZC
// Group 1-XXX: From left to right, the first three digits represent the country code (territory).
// Group 2-YYYY: Next are four digits representing the company code.
// Group 3-ZZZZZ: Following that, there are five digits representing the product code.
// Group 4-C: The last digit (on the right) is the check digit.

// The country code for Vietnam is 893.
// After knowing the origin, we check the validity of the barcode. If the initial check is invalid, there is reason to suspect that it may be counterfeit or fake goods.
// The validation principle:
// Take the sum of the even-position digits multiplied by 3 and add it to the sum of the odd-position digits (excluding the 13th digit, which is the check digit). Then add the result to the 13th digit. If the sum's units digit is 0, the barcode is valid; otherwise, if it's not 0, it's invalid, and there's a preliminary suspicion of counterfeit or fake goods.
// Please enter a 13-digit barcode.
// Check if it's a valid product code from Vietnam.
// If it's valid, print 1; otherwise, print 0.

// INPUT
// 8941234123459
// OUTPUT
// 0

// INPUT
// 8935001813286
// OUTPUT
// 1

#include <stdio.h>

int main(int argc, char const *argv[]){
    char str[13];
    scanf("%s", str);

    int sum = 0;
    for (int i = 0; i < 12; i++) {
        int digit = str[i] - '0';
        if (i % 2 == 0) sum += digit;
        else sum += digit * 3;
    }

    int check = str[12] - '0';
    if ((sum + check) % 10 == 0) printf("1");
    else printf("0");

    return 0;
}