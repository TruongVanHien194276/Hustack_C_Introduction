// roblem: Phân tích phân số bất kỳ sang phân số Ai cập
// Description
// Khi loài người bắt đầu có sự phân hóa giàu nghèo thì cũng là lúc đồng thời nhu cầu đếm và chia phát sinh. Để chia cho kết quả công bằng, phân số được ra đời. Lịch sử ghi nhận phân số được đưa thành kí hiệu Toán học đầu tiên là của người Ai Cập cách đây khoảng 3.650 năm. Lúc đó, các phân số đều chỉ có tử số là 1, các mẫu số là số tự nhiên lớn hơn 0. Ngày ấy, loài người thống nhất gọi đó là những phân số Ai Cập.

// Do người Ai Cập cổ đại chỉ công nhận các phân số có tử số bằng 1 nên các phân số có tử số lớn hơn 1 đều dược viết dưới dạng tổng các phân số có tử bằng 1 và mẫu số khác nhau.

// Người ta tin rằng mọi phân số đều biểu diễn được dưới dạng tổng của nhiều phân số. Bởi vậy, không cần đưa thêm những phân số có tử số khác 1 vào. Những phân số hay được sử dụng để biểu diễn nhất là những phân số Ai Cập mà mẫu số có nhiều ước số như 12, 24, 60, 36, 144... Có lẽ đó cũng là nguyên nhân hình thành đơn vị như: tá (12 giờ của nửa ngày, 12 chi trong chu kì lịch, 12 tháng của một năm), 24 giờ (trong một ngày), 60 giây (trong một phút), 60 phút (trong một giờ).

// Hãy viết chương trình nhập vào 1 phân số dạng a/b (b>a) và phân tích ra phân số ai cập dạng tổng các số 1/c + 1/d + ... với số lượng phân số là nhỏ nhất 

// INPUT
// 2/3
// OUTPUT
// 1/2 1/6

// Tức là phân số 2/3 sẽ được phân tách thành  tổng của 1/2 và 1/6

// INPUT
// 5/7
// OUTPUT
// 1/2 1/5 1/70

// INPUT
// 5/3
// OUTPUT
// -1

// Vì giá trị đầu vào của a và b là không hợp lệ




// Analyzing any fraction into Egyptian fractions.

// When humans began to experience wealth disparity, the need for counting and division arose simultaneously. To distribute results fairly, fractions were introduced. The history records the first mathematical notation of fractions around 3,650 years ago by the people of Egypt. Back then, all fractions had a numerator of 1, and the denominators were natural numbers greater than 0. Those were known as Egyptian fractions.
// In ancient Egypt, only fractions with a numerator of 1 were recognized. Fractions with numerators greater than 1 were written as sums of fractions with a numerator of 1 and different denominators.
// It was believed that all fractions could be represented as sums of various fractions. Therefore, there was no need to include fractions with numerators other than 1. The most commonly used fractions for representation were Egyptian fractions with denominators having many divisors, such as 12, 24, 60, 36, 144, etc. This might also be the reason behind the formation of units like: "tá" (12 hours in half a day, 12 signs in the zodiac, 12 months in a year), 24 hours (in a day), 60 seconds (in a minute), and 60 minutes (in an hour).
// Please write a program that takes as input a fraction in the form a/b (where b > a) and breaks it down into Egyptian fractions as the sum of 1/c + 1/d + ... with the minimum number of fractions.

// INPUT
// 2/3
// OUTPUT
// 1/2 1/6

// This means that the fraction 2/3 will be decomposed into a sum of 1/2 and 1/6.

// INPUT
// 5/7
// OUTPUT
// 1/2 1/5 1/70

// INPUT
// 5/3
// OUTPUT
// -1

// Because the input values of a and b are invalid.

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]){
    int a, b;
    scanf("%d/%d", &a, &b);

    if (a >= b) {
        printf("-1");
        return 0;
    }

    while (a != 0) {
        int x = ceil((float)b / a);
        printf("1/%d ", x);
        a = a * x - b;
        b = b * x;
    }

    return 0;
}