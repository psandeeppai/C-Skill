#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
 {
    char op[5] = {'+','-','*','/','%'};
    char operator;
    float a, b, result;
    printf("Available operators in this Calculator:\n");
    for (int i = 0; i < 5; i++) 
    {printf("%c\t", op[i]);
    }
    printf("\nEnter an operator (+, -, *, /, %): ");
    scanf(" %c", &operator);
    int valid = 0;
    for (int i = 0; i < 5; i++)
     {if (operator == op[i]) 
        {  valid = 1;
            break;
        }
    }

    if (!valid) {
        printf("Invalid operator!\n");
        return 1; 
    }
    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);
    switch (operator) {
        case '+': result = a+b;
                 break;
        case '-': result = a-b;
                 break;
        case '*': result = a*b;
                 break;
        case '/': if (b != 0)
                  {result = a/b;
                   } 
                else 
                {printf("Error occured!\n");
                return 1; 
                }
                 break;
        case '%': if (b!= 0)
                  {result = fmod(a, b);
                   } 
                else 
                {printf("Error occured!\n");
                return 1; 
                }
                 break;
        default: printf("Invalid operator!\n");
                  return 1; 
    }
    printf("Result: %.4f %c %.4f = %.4f \n", a, operator, b, result);
    return 0;
}
