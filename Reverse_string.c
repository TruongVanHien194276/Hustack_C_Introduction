// Problem: Reverse a string input from keyboard
// Description
// [String] Lesson 1
// Write a program to input a string of characters (maximum 100 characters) from the keyboard (notice that, this string may contain spaces), then display the reversed character string of the string just entered on the screen.
// For example:
// Input:
// abcd efgh

// Output:
// hgfe dcba
// ======================
// [Chuỗi kí tự] Bài 1
// Viết chương trình nhập vào 1 chuỗi kí tự (tối đa 100 kí tự) từ bàn phím (chú ý, chuỗi này có thể chứa dấu cách), sau đó hiển thị chuỗi kí tự đảo ngược của chuỗi vừa nhập ra màn hình.
// Ví dụ:
// Đầu vào:
// abcd efgh

// Đầu ra:
// hgfe dcba

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){
    char str[101];
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
