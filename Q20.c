#include<stdio.h>
int singleNumber(int* nums, int numsSize) {
    int dup_arr[numsSize];
    for(int i=0;i<numsSize;i++){
        dup_arr[i]=0;
    }
    for(int i=0;i<numsSize;i++){
        for(int j=0;j<numsSize;j++){
            if(nums[i]==nums[j]){
            dup_arr[i]++;}
        }
    }
    for(int i=0;i<numsSize;i++){
        if(dup_arr[i]==1){
            return nums[i];
        }
    }
    return 0;
}

int main() {
    int nums[] = {4, 1, 2, 1, 2};
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = singleNumber(nums, size);
    printf("%d\n", result);

    return 0;
}
