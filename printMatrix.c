#include <stdio.h>
#include "printMatrix.h"

void printMatrix(double **A, int m, int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%.1f ", A[i][j]);
        }
        printf("\n");
    }
}