// Problem: bảng chỉ số UV
// Description
// Vào mùa hè, chỉ số tia bức xạ cực tím - chỉ số UV rất cao, đặc biệt là buổi trưa và có thể gây nguy hại tới sức khỏe. Bảng chỉ số tia UV phân chia theo thang điểm từ 1 đến 11+ như sau.
// + Chỉ số tia UV 0 - <3(nhỏ hơn 3): chỉ số UV mức thấp (muc thap). Mọi người có thể ở dưới ánh nắng mặt trời khoảng 1 giờ trong thời gian cao điểm (từ 10h sáng đến 16h chiều) mà không bị cháy nắng.
// + Chỉ số UV 3 - <6 (nhỏ hơn 6): chỉ số UV ở mức trung bình (muc trung binh). Các vấn đề về tia UV đối với da sẽ nghiêm trọng hơn một chút nhưng vẫn nằm trong ngưỡng cho phép.
// + Chỉ số UV 6- <8 (nhỏ hơn 8): chỉ số UV mức cao (muc cao). Bạn nên cẩn thận hơn mỗi khi ra đường. Đội mũ rộng vành và kính râm để bảo vệ mắt, mũi và vành tai. Bạn cũng nên bôi kem chống nắng có chỉ số SPF ít nhất là 30, mặc quần áo dài.
// + Chỉ số UV 8-11: chỉ số UV mức rất cao (muc rat cao). Nếu bạn không cẩn thận, khả năng bạn bị cháy nắng là rất cao. Người có làn da nhạy cảm có thể bị bỏng trong vòng chưa đầy 10 phút. Nên giảm thiểu phơi nắng từ 10h đến 16h, bôi kem chống nắng có chỉ số SPF ít nhất là 30, đeo kính râm, mặc quần áo dài với chất liệu dày dặn khi ra ngoài trời.
// + Chỉ số UV hơn 11 (>11): chỉ số UV mức nguy hiểm (muc nguy hiem). Bạn có thể bị bỏng chỉ trong vòng 5 phút khi không bảo vệ. Tốt nhất bạn nên ở trong nhà và đóng cửa lại thay vì ra đường vào thời điểm này.
// Hãy viết chương trình nhập vào chỉ số UV dự báo trong ngày và in ra phân loại.
// INPUT
// 2.2
// OUTPUT
// muc thap

// INPUT
// 12.2
// OUTPUT
// muc nguy hiem

// Chú ý. Thông báo in ra là tiếng việt không dấu như mô tả trong ngoặc

#include <stdio.h>

int main(int argc, char const *argv[]){
    double uv;
    scanf("%lf", &uv);

    if (uv < 3) printf("muc thap");
    else if (uv < 6) printf("muc trung binh");
    else if (uv < 8) printf("muc cao");
    else if (uv <= 11) printf("muc rat cao");
    else printf("muc nguy hiem");

    return 0;
}