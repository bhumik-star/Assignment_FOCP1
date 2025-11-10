#include<stdio.h>
int main(){
    int num1, num2, subtract,sub1 = (num1>num2)?num1:num2;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);
    num1 = ~num1+1;
    subtract = num1+num2;
    printf("The subtraction is: %d",num1);
}