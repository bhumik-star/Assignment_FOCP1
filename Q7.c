#include<stdio.h>
int main(){
    int number,n[100],number_of_spaces=2;
    printf("Enter how much lines you want in the double pyramid: ");
    scanf("%d",&number);
    number_of_spaces *= number;
    for (int i = 0; i <= number; i++)
    {
        if(n[i-1]==0){
            n[i]=1;
        }
        else{
            n[i]=0;
        }
        for (int s = 0; s <= i; s++)
        {
            printf("%d",n[s]);
        }
        for (int i = 0; i < number_of_spaces; i++)
        {
            printf(" ");
        }
        for (int k = i; k >=0; k--)
        {
            printf("%d",n[k]);
        }
        number_of_spaces-=2;
        printf("\n");
        
    } 
    return 0;
}