// Problem: Tính số lượng người tối đa đi thang máy
// Description
// Một thang máy có thể chở tối đa trọng lượng x kg mỗi lần vận chuyển. VD. 750kg
// Trọng lượng trung bình của người trưởng thành ở VN dao động từ 45kg-80kg

// Hãy in ra số lượng người tối đa có thể chở mỗi lần của thang máy  

// Đầu vào là tải trọng tối đa của thang máy
// Đầu ra là số lượng người tối đa có thể chở mỗi lần, hai giá trị cách nhau 1 ký hiệu "-"

// INPUT
// 750
// OUTPUT
// 9-16


// Calculate the maximum number of people that can ride the elevator

// An elevator can carry a maximum weight of x kg each time. For example, 750kg.
// The average weight of adults in Vietnam ranges from 45kg to 80kg.
// Print out the maximum number of people that the elevator can carry each time.
// The input is the maximum load capacity of the elevator.
// The output is the maximum number of people that can be carried each time, separated by a hyphen "-".

// INPUT
// 750
// OUTPUT
// 9-16

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int load;
    scanf("%d", &load);

    int min_people = load / 80;
    int max_people = load / 45;

    printf("%d-%d", min_people, max_people);

    return 0;
}