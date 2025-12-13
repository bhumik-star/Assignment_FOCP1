/*
Design a C program to delete an element from the front, middle, or end of an array, and print
the array before and after deletion.
*/

#include<stdio.h>
int arr[50];
void method1(int elements)
{
        for (int i =0; i<=elements-1; i++)
        {
            arr[i] = arr[i+1];
        }
        printf("The new array is : ");
        elements -=1;
        for (int i = 0; i < elements; i++)
        {
            printf("%d",arr[i]);
        }
        printf("\n");
}
void method2(int elements){
    int indexnumber;
    printf("Enter the value of index number you want the number deleted from : ");
    scanf("%d",&indexnumber);
    for (int i =indexnumber; i<=elements; i++)
    {
        arr[i] = arr[i+1];
    }
    elements -=1;
    printf("The new arr is : ");
    for (int i = 0; i < elements; i++)
        {
        printf("%d",arr[i]);
    }
    printf("\n");
}
void method3(int elements){
    arr[elements-1]=0;
    elements -=1;
    printf("The new array is : ");
    for (int i = 0; i < elements; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");    
}

int main(){
    int elements,user_input;
    printf("How many elements you want in the array: ");
    scanf("%d",&elements);
    for(int i=0;i<elements;i++){
     printf("\nEnter the elements:");
     scanf("%d", &arr[i]);
    }
    printf("The  array is:\n");
for(int i=0;i<elements;i++){
    printf("%d ", arr[i]);}
    printf("Choose the place to delete a number:\n1.Beginning\n2.Middle\n3.End\n: ");
    scanf("%d",&user_input);
    if(user_input==1){
        method1(elements);
    }
    else if(user_input==2){
        method2(elements);
    }
    else if(user_input==3){
        method3(elements);
    }
    else{
        printf("Input Error!");
    }}
