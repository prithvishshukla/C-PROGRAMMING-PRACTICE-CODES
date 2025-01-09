// #include <stdio.h>
// int main() {
//     int a = 5;  
//     int b = 10; 
//     int temp;

//     printf("Before swapping, value of a = %d\n", a);
//     printf("Before swapping, value of b = %d\n", b);

//     temp = a;
//     a = b;
//     b = temp;

//     printf("After swapping, value of a = %d\n", a);
//     printf("After swapping, value of b = %d\n", b);

//     return 0;
// }







//     #include <stdio.h>
// int main() {
     
//          double x = 1.2;
//          int sum = (int)x + 1;
//          printf("sum = %d", sum);
//      return 0;
//     }










// #include <stdio.h> 
// int main() {
//     float a, b, c;
//     char op;

//     printf("Enter two numbers: ");
//     scanf("%f%f", &a, &b);
   

//     printf("Enter Operator: ");
//     scanf(" %c", &op);
//     switch (op) {
//         case '+':
//             c = a + b;
//             printf("Addition = %f\n", c);
//             break;
//         case '-':
//             c = a - b;
//             printf("Subtraction = %f\n", c);
//             break;
//         case '*':
//             c = a * b;
//             printf("Multiplication = %f\n", c);
//             break;
//         case '/':
//             if (b == 0) {
//                 printf("Division by zero is not allowed!\n");
//             } else {
//                 c = a / b;
//                 printf("Division = %f\n", c);
//             }
//             break;
//         default:
//             printf("Invalid Operator\n");
//             break;
//     }

//     return 0;
// }










// #include <stdio.h>
// int main() 
// {
//   float a,b,c,s,area;
//   int n;
//   printf ("Enter:\n1:For Rectangle \n2:For square \n3:For circle\n4:For triangle\n");
//     scanf("%d",&n);
//     switch(n){
    
//     case 1: printf("Enter length and breadth of rectangle");
//     scanf("%f%f",&a,&b);
//     area=a*b;
//     printf("Area of Rectanle:%f",area);
//     break;


//     case 2: printf("Enter Side of square");
//     scanf("%f%f" ,&a);
//   area=a*a;
//   printf("Area of Square:%f",area);
//       break;
  
//     case 3: printf("Enter radius of circle");                    
//     scanf("%f" ,&a);  
//     area=3.14*a*a;
//     printf("Area of Circle:%f",area);
//     break;


//     case 4: printf("Enter length and breadth of rectangle");
//     scanf("%f%f", &a, &b);
//     area=a*b;
//     printf("Area of Rectanle:%f",area);
//     break;  
//     default: printf("Invalid Input");
//     break;
//     }
//   return 0;
// }













// #include<stdio.h>
// int main()
// {
//   int n;
//   printf("Enter a number:");
//   scanf("%d",&n);
//     for(int i =1;i<=n;i++){
//       printf("%d\n",i);
//     }
//  return 0; 
// 
// }









// #include<stdio.h>
// int main()
// {
//   int n;
//   printf("Enter a number which table you want:");
//   scanf("%d",&n);
//     for(int i =1;i<=10;i++){
//       printf("%d\n",n*i);
//     }
  
//   return 0; 
// }








// #include<stdio.h>
// int main()
// {
// int n,i,c=0;
// printf("Enter the number");
// scanf("%d",&n);
// for(i=1;i<=n;i++)
// {
// if(n%i==0)
// c++;
// }
// if(c==2)
// printf("Number is Prime Number");
// else
// printf("Number is not Prime Number");
// return 0;
// }







// #include<stdio.h>
// int main()
// {
// int n,d,s=0;
// printf("Enter the number");
// scanf("%d",&n);
// while(n>0)
// {
// d=n%10;
// s=s+d;
// n=n/10;
// }
// printf("The Sum of digits:=%d",s);
// return 0;
// }








//  #include<stdio.h>
//  int main()
// {
// for(int i=9;i>=1;i--){
//   for(int j=1;j<=9;j++){
//     printf("%d",j);
//   } 
//   printf("\n");
// }
//   return 0;
// }







//  #include<stdio.h>
//  int main()
// {
// for(int i=1;i<=9;i++){
//   for(int j=1;j<=i;j++){
//     printf("%d",j);
//   } 
//   printf("\n");
// }
//   return 0;
// }











//  #include<stdio.h>
//  int main()
// {
// for(int i=9;i>=1;i--){
//   for(int j=9;j>=i;j--){
//     printf("%d",j);
//   } 

//   printf("\n");


// }
//   return 0;
// }









//  #include<stdio.h>
//  int main()
// {
// for(int i=1;i<=9;i++){
//   for(int j=9;j>=i;j--){
//     printf("%d",j);
//   } 
//   printf("\n");
// }
//   return 0;
// }







//  #include<stdio.h>
//  int main()
// {
// for(int i=9;i>=1;i--){
//   for(int j=1;j<=i;j++){
//     printf("%d",j);
//   } 
//   printf("\n");
// }
//   return 0;
// }






// #include <stdio.h>

// int main() {
//     int rows, i, j, space;

//     printf("Enter the number of rows for the pyramid: ");
//     scanf("%d", &rows);

//     for (i = 1; i <= rows; i++) {
//         for (space = 1; space <= rows - i; space++) {
//             printf(" ");
//         }
//         for (j = 1; j <= (2 * i - 1); j++) {
//             printf("%d", j);
//         }
//         printf("\n");
//     }

//     return 0;
// }











// #include <stdio.h>

// int main() {
//     int rows, i, j, space;

//     printf("Enter the number of rows for the pyramid: ");
//     scanf("%d", &rows);

//     for (i = 1; i <= rows; i++) {
//         for (space = 1; space <= rows - i; space++) {
//             printf(" ");
//         }
//         for (j = 1; j <= (2 * i - 1); j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int rows, i, j, space;

//     printf("Enter the number of rows for the pyramid: ");
//     scanf("%d", &rows);

//     for (i = rows; i >= 1; i--) {
//         for (space = 1; space <= rows - i; space++) {
//             printf(" ");
//         }
//         for (j = 1; j <= (2 * i - 1); j++) {
//             printf("%d", j);
//         }
//         printf("\n");
//     }

//     return 0;
// }












//  #include<stdio.h>
//  int main()
// {
// for(int i=9;i>=1;i--){
//   for(int j=1;j<=i;j++){
//     printf("%d",j);
//   } 
//   printf("\n");
// }
//   return 0;
// }







//  #include<stdio.h>
//  int main()
// {
// for(int i=1;i<=9;i++){
//   for(int j=9;j>=i;j--){
//     printf("%d",j);
//   } 
//   printf("\n");
// }
//   return 0;
// }





//  #include<stdio.h>
//  int main()
// {
// for(int i=9;i>=1;i--){
//   for(int j=1;j<=9;j++){
//     printf("%d",j);
//   } 
//   printf("\n");
// }
//   return 0;
// }



// for heart

#include <stdio.h>
#include <math.h>

int main() {
    int row, col;
    char symbols[] = {'*', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'n', 'i', 'm', 'r', 'a', 'n'};
    int symLength = sizeof(symbols) / sizeof(symbols[0]);
    int index = 0;

    for (row = 30; row >= -30; row--) {
        for (col = -60; col <= 60; col++) {
            if ((pow(col * 0.03, 2) + pow(row * 0.06, 2) - 1) * (pow(col * 0.03, 2) + pow(row * 0.06, 2) - 1) * (pow(col * 0.03, 2) + pow(row * 0.06, 2) - 1) - pow(col * 0.03, 2) * pow(row * 0.06, 3) <= 0.0) {
                printf("%c", symbols[index]);
                index = (index + 1) % symLength; // cycle through the symbols
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
