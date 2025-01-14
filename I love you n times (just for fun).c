#include <stdio.h>
// I love you n times (just for fun)
// application of while loop
int main(){
    int n,i=0;
    printf("No of time:\n");
     scanf("%d", &n);
     while (i < n){
    printf("I love you:%d\n", i+1);
     i = i + 1;
     }
    return 0;
}
