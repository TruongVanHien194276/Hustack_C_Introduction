// Problem: Chuan_hoa_ho_ten_nvtung
// Description
// Cho danh sách họ tên sinh viên. Cần chuẩn hóa họ tên sinh viên trong danh sách. Cách chuẩn hóa như sau: kí tự đầu mỗi từ trong họ tên phải viết hoa, các kí tự còn lại viết thường. Biết: danh sách cho phép tối đa 100 phần tử. Họ tên cần lưu có tối đa 50 kí tự. Họ tên là kí tự tiếng Việt không dấu. Yêu cầu: sử dụng mảng để lưu danh sách họ tên sinh viên.
// Dữ liệu nhập: dòng đầu tiên là số sinh viên trong danh sách. Các dòng tiếp theo là họ tên của từng sinh viên.
// Dữ liệu ra: họ tên sau chuẩn hóa của từng sinh viên trong danh sách, mỗi họ tên trên 01 dòng.
// INPUT:
// 3
// le ngoc hoang
// Pham duc Phi
// Nguyen Hung Vi
// OUTPUT:
// Le Ngoc Hoang
// Pham Duc Phi
// Nguyen Hung Vi

#include <stdio.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);

    char name[500][50];
    for (int i = 0; i < n; i++) {
        scanf(" %[^\n]", name[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 100; j++) {
            if (name[i][j] == '\0') break;
            if (j == 0 || name[i][j - 1] == ' ') {
                if (name[i][j] >= 'a' && name[i][j] <= 'z') name[i][j] -= 32;
            } else {
                if (name[i][j] >= 'A' && name[i][j] <= 'Z') name[i][j] += 32;
            }
        }
        printf("%s\n", name[i]);
    }

    return 0;
}
