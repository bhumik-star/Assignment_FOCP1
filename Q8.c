#include <stdio.h>
int main(){
    int a,n1=0,n2=1,n3;
    printf("Enter the number till you require the fabonacci series : ");
    scanf("%d",&a);
    for (int i = 0; i <= a; i++)
    {
        printf("%d ",n1);
        n3 = n1+n2;
        n1 = n2;
        n2 = n3;
    }
    printf("\n");
    return 0;
}