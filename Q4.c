#include <stdio.h>
void method1();
void method2();
int method3();
void method4();

int main()
{
    int number1, number2, method;
    printf("Enter a number : ");
    scanf("%d", &number1);
    printf("Enter a second number : ");
    scanf("%d", &number2);
    printf("Enter a method number  : ");
    scanf("%d", &method);
    if (method == 1)
        method1(number1, number2);
    else if (method == 2)
        method2(number1, number2);
    else if (method == 3)
    {
        method3(&number1, &number2);
        printf("Number 1 is : %d\nNumber 2 is : %d\n", number1, number2);
    }
    else if (method == 4)
    {
        method4(&number1, &number2);
        printf("Number 1 is : %d\nNumber 2 is : %d\n", number1, number2);
    }
    else{
        printf("Invalid.");
    }
    return 0;
}

void method1(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Number 1 is : %d", a);
    printf("Number 2 is : %d", b);
}
void method2(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Number 1 is : %d", a);
    printf("Number 2 is : %d", b);
}
int method3(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void method4(int* a,int* b){
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;
}