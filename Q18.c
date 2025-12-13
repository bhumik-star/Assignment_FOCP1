/* Develop a program to identify and print duplicate elements in an array, or print “-1” if no
duplicates exist, applying frequency detection and data validation*/

#include<stdio.h>
void duplicates_arr(int *arr,int elements);
int main(){
    int arr[50],arr_elements;
    printf("How many elements you want in your array(1-50): ");
    scanf("%d",&arr_elements);
    for(int i=0;i<arr_elements;i++){
        printf("\nEnter %d element: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Your array is: \n");
    for(int i=0;i<arr_elements;i++){
        printf("%d ",arr[i]);}
    duplicates_arr(arr,arr_elements);

}
void duplicates_arr(int *arr, int elements){
    printf("\n");
    int dup_arr[elements],duplicates=0;
    for (int i = 0; i < elements; i++)
        dup_arr[i] = 0;
    
    for (int i = 0; i < elements; i++) {
        for (int j = 0; j < elements; j++) {
            if (arr[i] == arr[j])
                dup_arr[i]++;
        }
    }
    printf("duplicate array is:\n");
    for(int i=0;i<elements;i++){
        
        if(dup_arr[i]>1){
            duplicates++;
            int already_printed = 0;
            for (int k = 0; k < i; k++) {
                if (arr[k] == arr[i]) {
                    already_printed = 1;
                    break;
                }
            }
            if (!already_printed) {
                printf("%d ", arr[i]);

            }
        
        }
    
    }
    if(!duplicates){
                printf("-1");
            }
}
