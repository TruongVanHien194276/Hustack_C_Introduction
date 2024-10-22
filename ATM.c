// Problem: Tính số cách để trả tiền cho một yêu cầu rút tiền từ cây ATM
// Description
// Cây ATM cho phép khách hàng tạo yêu cầu rút tiền tối đa 5tr/lần.
// Trong hộp tiền của cây có các tiền mệnh giá lần lượt 500K 200K 100K và 50K
// Hãy in ra số cách có thể trả tiền cho 1 yêu cầu rút tiền của khách 
// Nếu số tiền rút KHÔNG hợp lệ hoặc không có cách trả tiền thì in ra 0

// INPUT
// 100000000
// OUTPUT
// 0

// INPUT
// 10000
// OUTPUT
// 0

// INPUT
// 100000
// OUTPUT
// 2



// Calculate the number of ways to dispense money for a cash withdrawal request from an ATM.
// The ATM allows customers to make cash withdrawal requests in denominations of up to 5 million VND per transaction. Inside the ATM's cashbox, there are bills with denominations of 500K, 200K, 100K, and 50K VND.
// Print the number of ways money can be dispensed for a customer's withdrawal request. If the withdrawal amount is not valid or there is no way to dispense the money, print 0.
// INPUT
// 100000000
// OUTPUT
// 0

// INPUT
// 10000
// OUTPUT
// 0

// INPUT
// 100000
// OUTPUT
// 2

#include <stdio.h>

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);

    if (n % 50000 != 0 || n > 5000000) {
        printf("0");
        return 0;
    }

    int cnt = 0;
    for (int i = 0; i <= n / 500000; i++) {
        for (int j = 0; j <= n / 200000; j++) {
            for (int k = 0; k <= n / 100000; k++) {
                for (int l = 0; l <= n / 50000; l++) {
                    if (i * 500000 + j * 200000 + k * 100000 + l * 50000 == n) {
                        cnt += 1;
                    }
                }
            }
        }
    }

    printf("%d", cnt);
    return 0;
}