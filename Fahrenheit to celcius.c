#include <stdio.h>

float temp(int a) {
    return (a * 9.0 / 5) + 32;  
}

int main() {
    int a;  
    printf("Enter the value: ");
    scanf("%d", &a);  
    printf("Entered value: %d\n", a); 
    printf("temp=%.2f\n", temp(a)); 
    
    return 0;
}
