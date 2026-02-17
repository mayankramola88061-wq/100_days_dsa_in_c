//Boundary-to-Center Matrix Walk
#include <stdio.h>

int main() {
    int r, c;

    scanf("%d %d", &r, &c);

    int matrix[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int top = 0, bottom = r - 1;
    int left = 0, right = c - 1;

    while (top <= bottom && left <= right) {

        for (int i = left; i <= right; i++) {
            printf("%d ", matrix[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            printf("%d ", matrix[i][right]);
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }

    return 0;
}
//spiral matrix 
include <stdlib.h>

int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int rows = matrixSize;
    int cols = matrixColSize[0];

    int total = rows * cols;
    *returnSize = total;

    int* result = (int*)malloc(total * sizeof(int));
    int index = 0;

    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {

        for (int i = left; i <= right; i++)
            result[index++] = matrix[top][i];
        top++;

        for (int i = top; i <= bottom; i++)
            result[index++] = matrix[i][right];
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                result[index++] = matrix[bottom][i];
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                result[index++] = matrix[i][left];
            left++;
        }
    }

    return result;
}
