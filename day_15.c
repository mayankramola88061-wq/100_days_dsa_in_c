//matrix diagnal sum 
#include <stdio.h>

int main() {
    int m, n;

    scanf("%d %d", &m, &n);

    int matrix[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;

    for (int i = 0; i < m && i < n; i++) {
        sum += matrix[i][i];
    }

    printf("%d\n", sum);

    return 0;
}
//set matrix zeroes 
void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int rows = matrixSize;
    int cols = (int)*matrixColSize;
    bool* zerosRows = malloc(sizeof(bool) * rows);
    bool* zerosCols = malloc(sizeof(bool) * cols);
    bool* zeros = calloc((rows * cols), sizeof(bool));
    for(int r = 0; r < rows; r++) {
        for(int c = 0; c < cols; c++) {
            if (matrix[r][c] == 0) {
                zeros[r * cols + c] = true;
            }
        }
    }

    for(int r = 0; r < rows; r++) {
        for(int c = 0; c < cols; c++) {
            if (zeros[r * cols + c]) {
                if (~zerosCols[c])  {
                    for(int i=0; i<cols; i++){
                        matrix[r][i] = 0;
                    }
                    zerosCols[c] = true;
                }
                if (~zerosRows[r])  {
                    for(int i=0; i<rows; i++){
                        matrix[i][c] = 0;
                    }
                    zerosRows[r] = true;
                }
            }
        }
    }
}
