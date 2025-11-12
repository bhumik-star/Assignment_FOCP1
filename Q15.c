#include <stdio.h>
int main()
{
    int a[5];
    int size = sizeof(a) / 4;
    for (int i = 0; i < size; i++){
        printf("Enter a number : ");
        scanf("%d",&a[i]);
    }
    int temp = a[size-1];
    for (int i = size-1 ;i >=0; i--){
            a[i+1] = a[i];
        }
    a[0] = temp;
for (int i = 0; i < size; i++){
    printf("%d ",a[i]);
}
printf("\n");
 return 0;
}