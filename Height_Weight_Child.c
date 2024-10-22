// Problem: Chiều cao và cân nặng trẻ em trong trường có vượt chuẩn
// Description
// Trong đợt 1/6 nhà trường tổ chức đo chiều cao, cân nặng và khám sức khỏe cho cho các cháu học sinh mầm non của trường. 
// Nhà trường muốn tính xem chiều cao và cân nặng trung bình của các cháu, xem có cháu nào thuộc diện nguy cơ suy sinh dưỡng hoặc béo phì hay không.
// Hãy viết chương trình nhập vào chiều cao và cân nặng của các cháu học sinh trong lớp, tính và in ra chiều cao trung bình, cân nặng trung bình. 
// Theo quy chuẩn của VN thì chỉ số BMI cho trẻ bình thường sẽ là từ 14.5-16.8, nếu dưới ngưỡng này là suy sinh dưỡng, và trên là nguy cơ béo phì. Hãy in ra số lượng trẻ thuộc diện phải theo dõi thêm về sức khỏe trong lớp 

// Đầu vào là chiều cao (theo cm) và cân nặng (theo kg), kết thúc nhập khi gặp giá trị -1
// Đầu ra in theo format ở dưới 

// INPUT
// 98 16.5 102 17.2 104 18.5 99.6 19.5 -1
// OUTPUT
// 100.90cm 17.93kg 3



// Height and weight of children at school exceed standards.

// In early June, the school organized height and weight measurements and health check-ups for preschool students. The school wants to calculate the average height and weight of the students and determine if any of them are at risk of being undernourished or obese.
// Please write a program that takes the height and weight of the students in the class as input, calculates and prints the average height and weight. According to Vietnamese standards, the BMI (Body Mass Index) for normal children should fall between 14.5 and 16.8. If it's below this range, it's undernourished, and if it's above, it's at risk of obesity. Print the number of children who need further health monitoring in the class.

// The input consists of height (in cm) and weight (in kg), and it ends when a value of -1 is encountered.

// INPUT
// 98 16.5 102 17.2 104 18.5 99.6 19.5 -1
// OUTPUT
// 100.90cm 17.93kg 3

#include <stdio.h>

int main(int argc, char const *argv[]){
    double height, weight, total_height = 0, total_weight = 0;
    int cnt = 0, risk_cnt = 0;

    while (1) {
        scanf("%lf", &height);
        if (height == -1) break; 
        
        scanf("%lf", &weight);

        total_height += height;
        total_weight += weight;
        cnt++;

        height = height / 100;
        double bmi = weight / (height * height);
        
        if (bmi < 14.5 || bmi > 16.8) risk_cnt++;
    }

    if (cnt > 0) {
        double avg_height = total_height / cnt;
        double avg_weight = total_weight / cnt;
        printf("%.2fcm %.2fkg %d", avg_height, avg_weight, risk_cnt);
    } else printf("0cm 0kg 0");

    return 0;
}
