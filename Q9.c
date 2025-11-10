#include <stdio.h>
int main(){
    int array[5];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number : ");
        scanf("%d",&array[i]);
    }
    for (int j = 0; j < 10; j++)
    {
       if (array[j]==99)
       {
        printf("The number which is 99 index number is : %d\n",j+1);
        break;
       }
       }
    return 0;
}