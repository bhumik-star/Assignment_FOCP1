#include<stdio.h>
int main(){
    int num1, num2, hcf_not1=0,temp=(num1>num2)?num2:num1;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);
    for(int i=2;i<=temp;i++){
        if(num1%i==0 && num2%i==0){
            printf("The hcf is %d", i);
            hcf_not1=1;
        }
    }
    if(hcf_not1==0){
        printf("The hcf is %d", 1);
    }
}