#include <stdio.h>
int main() {
    int n, i;
    float sum = 0.0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    float arr[n];
    printf("Enter the elements:\n");
    for(i = 0; i < n; ++i) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    printf("Sum = %.2f\n", sum);
    return 0;
}