#include<stdio.h>
int main()
{
int original_array[] = {8, 2, 3, 4, 5};
int n = 5;
int copied_array[5];
for (int i = 0; i < n; i++) {
    copied_array[i] = original_array[i];
    }
    printf("copied_array: " );
    for (int i = 0; i < n; i++) {
    printf("%d",copied_array[i]);
}
return 0;
}