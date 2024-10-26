// Problem: Cấp độ bão
// Description
// Cấp độ của một cơn bão được xác định theo tốc độ gió theo Thang bão Saffir - Simpson như sau:
// + Cấp 1: 119-153 km/h.
// + Cấp 2: 154-177 km/h.
// + Cấp 3: 178-209 km/h.
// + Cấp 4: 210-249 km/h.
// + Cấp 5: lớn hơn hoặc bằng 250 km/h.
// Cho một mảng số nguyên X biểu diễn tốc độ gió (tính theo đơn vị km/h) của các cơn bão và N là số phần tử của mảng (số cơn bão), biết số cơn bão lớn hơn 0 và nhỏ hơn 100. Hãy in ra cấp độ bão của cơn bão lớn nhất. Trong trường hợp không có tốc độ gió nào đạt tới cấp độ bão thì in ra giá trị 0.
// Mô tả giá trị đầu vào:
// Dòng đầu tiên là số phần tử của mảng, ví dụ:
// 3
// Dòng thứ hai là các số nguyên trong mảng, ngăn cách nhau bằng dấu cách, ví dụ:
// 200 300 400
// Mô tả giá trị đầu ra:
// Cấp độ bão cao nhất. Ví dụ:
// 5

#include <stdio.h>

int getLevel(int speed) {
    if (speed >= 250) return 5;
    if (speed >= 210) return 4;
    if (speed >= 178) return 3;
    if (speed >= 154) return 2;
    if (speed >= 119) return 1;
    return 0;
}

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);

    int res = 0;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        int level = getLevel(x);
        if (level > res) res = level;
    }

    printf("%d", res);
    return 0;
}