// Problem: Tính số lượng xe taxi tối thiểu
// Description
// Xe taxi 4 chỗ ở VN có thể chở được từ 1-4 người (không kể lái xe). 
// Giả sử bạn cần thuê xe taxi để chở <slg> người trong gia đình bạn ra bến xe đi chơi.
// Bạn sẽ cần gọi tối thiểu bao nhiêu xe 

// INPUT
// 5
// OUTPUT
// 2


// Calculate Minimum Number of Taxi Cars
// In Vietnam, 4-seat taxis can carry from 1 to 4 people (not including the driver).
// Assuming you need to hire a taxi to transport <slg> people from your family to the bus station, how many minimum taxis will you need?
// INPUT
// 5
// OUTPUT
// 2

#include <stdio.h>

int main(int argc, char const *argv[]){
    int slg;
    scanf("%d", &slg);
    printf("%d", (slg + 3) / 4);
    return 0;
}