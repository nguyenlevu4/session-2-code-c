#include <stdio.h>

int main(){
    int a,b ;
    printf("nhập chiều dài cho hình chữ nhật ");
    scanf("%d", &a);
    
    printf("nhập chiều rộng cho hình chữ nhật ");
    scanf("%d", &b);
    
    printf("chu vi hình chữ nhật là = %d\nn", 2*(a + b));
    printf("diện tích hình chữ nhật là = %d", a * b);
    
    return 0;
}