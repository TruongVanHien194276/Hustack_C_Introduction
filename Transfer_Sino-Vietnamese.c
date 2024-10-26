// Problem: chuyển số Hán Việt
// Description
// Cách ghép số tiếng hán việt tới số 99 sẽ là dạng
// nhat 	1
// nhi 	2
// tam 	3
// tu 	4
// ngu 	5
// luc 	6 
// that 	7
// bat 	8
// cuu 	9
// thap 	10

// Số từ 11->19 sẽ là 
// 11 thap nhat
// 12 thap nhi
// 13 thap tam
// ...
// 19 thap cuu

// Số từ 20-99 sẽ là
// 20 nhi thap
// 21 nhi phap nhat
// ..
// 55 ngu thap ngu
// ..
// 99 cuu thap cuu

// Hãy viết chương trình nhập vào 1 số trong khoảng 1-99 và in ra chữ số Hán Việt tương ứng

// INPUT
// 53
// OUTPUT 
// ngu thap tam

// INPUT
// 13
// OUTPUT
// thap tam

// INPUT
// 70
// OUTPUT
// that thap

// Chú ý. giá trị đầu ra là chữ viết thường và cách nhau chỉ 1 dấu cách trống (space)
// Nếu đầu vào không hợp lệ thì in ra -1

#include <stdio.h>

void convert(int n) {
    char *a[] = {"", "nhat", "nhi", "tam", "tu", "ngu", "luc", "that", "bat", "cuu"};
    
    if (n < 1 || n > 99) {
        printf("-1"); 
        return;
    }

    if (n < 10) { 
        printf("%s", a[n]);
    } else if (n < 20) { 
        printf("thap %s", a[n % 10]);
    } else { 
        int ten = n / 10;
        int unit = n % 10;
        
        if (unit == 0) printf("%s thap", a[ten]);
        else printf("%s thap %s\n", a[ten], a[unit]);
    }
}

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    convert(n);
    return 0;
}
