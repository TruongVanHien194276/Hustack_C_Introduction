// Problem: Kiểm tra 1 số nguyên có đối xứng, số Palindrome
// Description
// Một số nguyên được coi là số đẹp nếu nó là số dạng đối xứng 
// Hãy xây dựng chương trình nhập vào 1 số nguyên và kiểm tra xem nó có phải số Palindrome
// Chương trình in ra 0 nếu số đó không phải và 1 nếu ngược lại 
// INPUT
// 100000000
// OUTPUT
// 0

// INPUT
// 10001
// OUTPUT
// 1

// INPUT
// 10201
// OUTPUT
// 1


// Check whether an integer is a palindrome.
// A palindrome number is a number that remains the same when its digits are reversed. Please create a program to input an integer and check if it is a palindrome. The program should print 0 if the number is not a palindrome and 1 if it is.
// INPUT
// 100000000
// OUTPUT
// 0

// INPUT
// 10001
// OUTPUT
// 1

// INPUT
// 10201
// OUTPUT
// 1

#include <stdio.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);

    int m = n;
    int rev = 0;
    while (m > 0) {
        rev = rev * 10 + m % 10;
        m /= 10;
    }

    if (rev == n) printf("1");
    else printf("0");

    return 0;
}