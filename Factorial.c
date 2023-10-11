#include<stdio.h>
int factorial(int n)
{   if (n == 0 || n == 1) 
    {return 1; 
    } 
    else 
    {return n * factorial(n - 1); 
    }
}

void main()
{   int n;
    printf("Enter number:");
    scanf("%d", &n);
    if(n<0)
    printf("Factorial not possible!\n");
    else
    if(n==0)
    printf("Factorial is = 1\n");
    else
    { int x = factorial(n);
    printf("Factorial is = %d \n", x);
    }
}