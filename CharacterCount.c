#include<stdio.h>
void main(){
    char string[100];
    printf("Enter a String: ");
    int x=printf(fgets(string,sizeof(string),stdin));
    printf("The length of the entered string is %d.",x-1);
}