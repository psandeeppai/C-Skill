#include <stdio.h>

int main() {
    char op;
    int num1, num2;
    float result;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter 1st Number: ");
    scanf("%d",&num1);
    printf("Enter 2nd Number: ");
    scanf("%d",&num2);
    switch(op) {
        case '+':
            printf("%d + %d = %d", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                result = (float)num1 / num2; 
                printf("%d / %d = %f", num1, num2, result);
            }
            else
                printf("Error: Division by zero");
            break;
        default:
            printf("Error: Invalid operator!");
    }
    return 0;
}
