// Problem: Xếp hạng điểm số
// Description
// Viết mã nguồn C thực hiện công việc sau
// Đọc đầu vào số N là số lượng môn học mà SV theo học trong kỳ này. Tiếp theo là đọc N dòng để biết: (i) điểm giữa kỳ G; (ii) điểm cuối kỳ C; (iii) hệ số điểm giữa kỳ Hg; (iv) trọng số của môn học w (là số nguyên không âm).
// Chương trình sẽ tính điểm tổng kết môn học theo công thức: G*Hg + C*(1 - Hg)
// Chương trình sẽ tính điểm trung bình học kỳ theo công thức
// Tổng[(điểm tổng kết môn học)*(trọng số)] / Tổng [(trọng số)]
// Chương trình sẽ xếp hạng điểm trung bình học kỳ của SV nếu nằm trong các khoảng sau:
// Từ 8.5 trở lên: hạng A
// Từ 7.5 đến dưới 8.5: hạng B
// Từ 6.5 đến dưới 7.5: hạng C
// Dưới 6.5: hạng D
// Tuy vậy SV có điểm thuộc hạng A, B sẽ bị tụt một hạng nếu như có từ 1/3 số môn trở lên với điểm tổng kết môn học dưới 6.5.
// Giả sử: tất cả dữ liệu do người dùng nhập vào đều hợp lệ
// Input:
// 3
// 6 6 0.4 1
// 6 6 0.4 1
// 6 6 0.4 1
// Output:
// D

#include <stdio.h>

int main(int argc, char const *argv[]){
    int N; 
    scanf("%d", &N);

    double totalScore = 0.0;
    int totalWeight = 0;
    int cnt = 0;

    for (int i = 0; i < N; i++) {
        double G, C, Hg;
        int w;
        scanf("%lf %lf %lf %d", &G, &C, &Hg, &w);
        
        double grade = G * Hg + C * (1 - Hg);
        if (grade < 6.5) cnt++;
        totalScore += grade * w;
        totalWeight += w;
    }

    double GPA = totalScore / totalWeight;

    char rank;
    if (GPA >= 8.5) rank = 'A';
    else if (GPA >= 7.5) rank = 'B';
    else if (GPA >= 6.5) rank = 'C';
    else rank = 'D';
    
    if ((rank == 'A' || rank == 'B') && cnt > N / 3) rank++;

    printf("%c\n", rank);
    
    return 0;
}