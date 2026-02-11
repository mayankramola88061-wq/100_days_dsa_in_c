//matrix addition 
#include <stdio.h>

int main() {
    int m, n;

    scanf("%d %d", &m, &n);

    int A[m][n], B[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", A[i][j] + B[i][j]);

            if (j != n - 1)   
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
//transpose matrix 
#include <stdlib.h>
 
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
   int rows = matrixSize;          
    int cols = matrixColSize[0];    

    *returnSize = cols;

    *returnColumnSizes = (int*)malloc(cols * sizeof(int));
    for (int i = 0; i < cols; i++) {
        (*returnColumnSizes)[i] = rows;
    }

    int** result = (int**)malloc(cols * sizeof(int*));
    for (int i = 0; i < cols; i++) {
        result[i] = (int*)malloc(rows * sizeof(int));
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }

    return result; 
}
