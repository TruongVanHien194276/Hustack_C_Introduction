// Problem: Đếm số lần suất hiện chữ cái
// Description
// Đếm tần suất xuất hiện các chữ cái trong xâu.
// Cho 1 xâu độ dài tối đa 255 ký tự, đếm tần suất xuất hiện của các chữ cái trong bảng Alphabet xuất hiện trong xâu. Các chữ cái không phân biệt hoa thường. In ra -1 nếu không có chữ cái nào trong xâu. 
// Ví dụ:
// Input: 
// AAbbbbCCCaa
// Output:
// A 4
// B 4
// C 3
// Input: 123456_*@#
// Output: -1

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){
    char s[255];
    fgets(s, 255, stdin);

    int cnt[26] = {0};
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') cnt[s[i] - 'A']++;
        else if (s[i] >= 'a' && s[i] <= 'z') cnt[s[i] - 'a']++;
    }

    int flag = 0;
    for (int i = 0; i < 26; i++) {
        if (cnt[i] > 0) {
            printf("%c %d\n", i + 'A', cnt[i]);
            flag = 1;
        }
    }
    if (flag == 0) printf("-1");
    return 0;
}