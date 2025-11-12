#include <stdio.h>
int main(){
    int array[10],flag=1;
    for (int i = 0; i < 10; i++){
        printf("Enter the number : ");
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < 10; i++){
        flag=1;
        for (int j = 2; j < array[i]; j++)
        {
             if (array[i]%j==0){
               flag=0;
            }
        }
        if(flag){
            if(array[i]!=1) 
            {printf("%d is the prime number.\n",array[i]);}
}}}