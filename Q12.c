#include <stdio.h>
int main(){
    int number[10];
    for (int i = 0; i < 10; i++){
        printf("Enter a number : ");
        scanf("%d",&number[i]);
    }
    int max = number[0];
    int min = number[0];
    for (int i = 0; i < 10; i++){
        if (number[i]>max)
            max = number[i];
        else if(number[i]<min)
            min = number[i];
    }
    printf("The maximum number is : %d\nThe minimum number is : %d\n",max,min);
        return 0;
    }