#include <stdio.h>

int main() { // Kiểu số nguyên
    int a = 10; // Lưu trữ số nguyên
    float c = 3.14; // Lưu trữ số thực đơn chính xác
    double d = 2.71828; // Lưu trữ số thực độ chính xác gấp đôi
    char e = 'A'; // Lưu trữ một ký tự
    _Bool g = 1; // Chỉ nhận giá trị 0 (false) hoặc 1 (true)
    
    // In ra các giá trị để kiểm tra
    printf("int a = %d\n", a);
    printf("float c = %.2f\n", c);
    printf("double d = %.5lf\n", d);
     printf("char e = %c\n", e);
     printf("Bool g = %d\n", g);
     
     return 0; //trả về giá trị từ một hàm hoặc để thoát khỏi hàm mà không trả về giá trị 
}