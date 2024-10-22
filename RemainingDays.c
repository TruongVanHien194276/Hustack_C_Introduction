// Problem: In ra các thứ còn lại trong tháng
// Description
// Nhập vào thứ, ngày và tháng hiện tại, hãy in ra nốt các ngày cùng thứ của tháng đó.
// INPUT
// 1 6
// OUTPUT
// 8 15 22 29
// ngày 1 tháng 6 là thứ 5, các ngày thứ 5 còn lại trong tháng 6 là 8 15 22 29
// INPUT
// 26 5
// OUTPUT
// 0
// Vì không còn ngày nào cùng thứ với ngày 26 tháng 5
// Chú ý. Tháng 2 chỉ 28 ngày
// Print the remaining days of the month.
// Enter the day, date, and current month, then print the remaining dates with the same day of the week in that month.
// INPUT
// 1 6
// OUTPUT
// 8 15 22 29
// On June 1st, it's a Tuesday. The remaining Tuesdays in June are the 8th, 15th, 22nd, and 29th.
// INPUT
// 26 5
// OUTPUT
// 0
// Because there are no more days with the same day of the week as May 26th.
// Please note that February only has 28 days.

#include <stdio.h>

int main(int argc, char const *argv[]){
    int date, month, days;
    scanf("%d %d", &date, &month);

    if (month < 1 || month > 12) {
        printf("0");
        return 0;
    }

    if (month == 2) days = 28;  
    else if (month == 4 || month == 6 || month == 9 || month == 11) days = 30;  
    else days = 31;  

    int res = date + 7;
    if (res > days) printf("0\n"); 
    else {
        while (res <= days) {
            printf("%d ", res);
            res += 7;
        }
        printf("\n");
    }

    return 0;
}
