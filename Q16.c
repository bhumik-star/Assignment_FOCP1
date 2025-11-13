
#include<stdio.h>
int arr[50];
void method1(int elements)
{   int numb;
    printf("Enter the number you want to add in the starting : ");
        scanf("%d",&numb);
        for (int i =elements-1; i>=0; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[0] = numb;
        printf("The new array is : ");
        for (int i = 0; i <= elements; i++)
        {
            printf("%d",arr[i]);
        }
        printf("\n");
}
void method2(int elements){
    int numb, indexnumber;
    printf("Enter the number you want to add in the middle : ");
    scanf("%d",&numb);
    printf("Enter the value of index number you want the number in : ");
    scanf("%d",&indexnumber);
    for (int i =elements; i>=indexnumber; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[indexnumber] = numb;
    printf("The new arr is : ");
    for (int i = 0; i <= elements; i++)
        {
        printf("%d",arr[i]);
    }
    printf("\n");
}
void method3(int elements){
    int numb;
    printf("Enter the number you want to add in the end : ");
    scanf("%d",&numb);
    arr[elements] = numb;
    printf("The new array is : ");
    for (int i = 0; i <= elements; i++)
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
    printf("Choose the place to indert a number:\n1.Beginning\n2.Middle\n3.End\n: ");
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
