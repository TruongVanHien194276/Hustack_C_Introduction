// Problem: Tính chỉ số BMI
// Description
// Viết chương trình nhập vào 2 số thực là chiều cao (tính theo m) và cân nặng (theo kg). Hãy tính và in ra màn hình chỉ số BMI của người đó. 
// Đầu ra lấy đến 2 chữ số thập phân

// BMI = kg/(m*m)

// INPUT
// 1.5 50.5
// OUTPUT
// 22.44


// Calculate BMI

// Write a program that takes two real numbers as input: height (in meters) and weight (in kilograms). Calculate and display the BMI (Body Mass Index) of the person.
// The output is rounded to two decimal places.
// BMI = weight / (height * height)

// INPUT
// 1.5 50.5
// OUTPUT
// 22.44

#include <stdio.h>

int main(int argc, char const *argv[]){
    float h, w;
    scanf("%f %f", &h, &w);
    printf("%.2f", w/(h*h));
    return 0;
}