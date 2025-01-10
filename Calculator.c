
#include <stdio.h> 
int main() {
    float a, b, c;
    char op;

    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);
   

    printf("Enter Operator: ");
    scanf(" %c", &op);
    switch (op) {
        case '+':
            c = a + b;
            printf("Addition = %f\n", c);
            break;
        case '-':
            c = a - b;
            printf("Subtraction = %f\n", c);
            break;
        case '*':
            c = a * b;
            printf("Multiplication = %f\n", c);
            break;
        case '/':
            if (b == 0) {
                printf("Division by zero is not allowed!\n");
            } else {
                c = a / b;
                printf("Division = %f\n", c);
            }
            break;
        default:
            printf("Invalid Operator\n");
            break;
    }

    return 0;
}




