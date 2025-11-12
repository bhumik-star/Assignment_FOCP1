#include <stdio.h>
int main()
{int array[10],relative_max[10],max=0,count=0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the number : ");
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (array[i] > array[i + 1])
        {
            if (array[i] > array[i - 1])
            {
                relative_max[count] = array[i];
                count++;
            }
        }
    }
    for (int i=0; i<count; i++){
        printf("The peak elements are %d\n", relative_max[i]);
        if (relative_max[i]>max)
            max = relative_max[i];}
    printf("The peakest element is %d", max);
}