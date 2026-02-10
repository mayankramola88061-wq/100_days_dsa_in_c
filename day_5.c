//arrange arrival logs 
#include <stdio.h>

int main() {
    int p, q;

    scanf("%d", &p);
    int a[p];
    for (int i = 0; i < p; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &q);
    int b[q];
    for (int i = 0; i < q; i++) {
        scanf("%d", &b[i]);
    }

    int i = 0, j = 0;

    while (i < p && j < q) {
        if (a[i] <= b[j]) {
            printf("%d ", a[i]);
            i++;
        } else {
            printf("%d ", b[j]);
            j++;
        }
    }

    while (i < p) {
        printf("%d ", a[i]);
        i++;
    }

    while (j < q) {
        printf("%d ", b[j]);
        j++;
    }

    return 0;
}
//Merge Sorted Array
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = m - 1;       
    int j = n - 1;        
    int k = m + n - 1;    

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    while (j >= 0) {
        nums1[k] = nums2[j];
               j--;
        k--;
    }
}
