#include <stdio.h>
 
 int main(){
     int a = 2;
     int b = 3;
     
      int tong = a + b;
      int hieu= a - b;
      int tichtich = a * b;
      int thuong = a / b;
      
         printf("Tổng của %d và %d là: %d\n", a, b, tong);
         printf("hiệu của %d và %d là: %d\n", a, b, hieu);
         printf("tích của %d và %d là: %d\n", a, b, tichtich);
         printf("Thương của %d và %d là: %d\n", a, b, thuong);
         
         return 0;
     }