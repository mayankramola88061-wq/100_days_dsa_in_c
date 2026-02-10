//remove duplicates from sorted array 
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n == 0) {
        return 0;
    }

    int k = 1;  

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[k] = arr[i];
            k++;
        }
    }

    for (int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
//move zeroes
void moveZeroes(int* nums, int numsSize) {
    int k = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[k] = nums[i];
            k++;
        }
    }

    while (k < numsSize) {
        nums[k] = 0;
        k++;
    }
}
