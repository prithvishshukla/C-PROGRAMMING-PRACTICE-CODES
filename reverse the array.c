#include<stdio.h>
int main()
{
int array[] = {8, 2, 3, 4, 5};
int n = 5;
for (int i = 0; i < n; i++) {
   printf("%d ", array[i]);
    }
    printf("\n reversed_array: " );
    for (int i = n - 1; i >= 0; i--) {
    printf("%d",array[i]);
}
return 0;
}