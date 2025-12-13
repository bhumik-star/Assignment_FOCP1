#include<stdio.h>
int searchInsert(int* nums, int numsSize, int target) {
    int start = 0;
    int end = numsSize - 1;
    int mid;

    while (start <= end) {
        mid = (start + end) / 2;

        if (target == nums[mid]) {
            return mid;
        }

        if (target > nums[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return start;
}

int main() {
    int nums[100], n, target;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter sorted elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);
    int ans = searchInsert(nums, n, target);
    printf("Output: %d\n", ans);
    return 0;
}
