 #include <stdio.h>
 int main() {
     int a = 5;  
     int b = 10; 
     int temp;
    printf("Before swapping, value of a = %d\n", a);
    printf("Before swapping, value of b = %d\n", b);

    temp = a;
     a = b;
     b = temp;

     printf("After swapping, value of a = %d\n", a);
     printf("After swapping, value of b = %d\n", b);

     return 0;
 }
