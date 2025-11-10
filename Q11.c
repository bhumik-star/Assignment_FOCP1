#include <stdio.h>
int main()
{
    int array[10], even[10], odd[10],x=0,y=0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the number : ");
        scanf("%d", &array[i]);
    }
    for (int k = 0; k < 10; k++)
    {
        if (array[k] % 2 == 0)
        {
            even[x]=array[k];
            x++;
        }
        else{
            odd[y]=array[k];
            y++;
        }
    }
    printf("The elements of even array are : ");
    for(int i = 0 ; i<x ; i++){
        printf("%d,",even[i]);
    }
    printf("\nThe elements of odd array are : ");
    for (int i = 0; i < y; i++)
    {
        printf("%d,",odd[i]);
    }
    
    return 0;
}