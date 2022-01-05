#include <stdio.h>
#include <stdlib.h>
#include "matmult.h"
#include "CBLAS/cblas.h"
#include "printMatrix.h"

int main(void){
    int m = 3, n = 3, k = 3;
    int i, j;
    double **A = (double **)calloc(m, sizeof(double *));
    double **B = (double **)calloc(m, sizeof(double *));
    double **C = (double **)calloc(m, sizeof(double *));
    for (i = 0; i < m; i++){
        A[i] = (double *)calloc(n, sizeof(double));
        B[i] = (double *)calloc(n, sizeof(double));
        C[i] = (double *)calloc(n, sizeof(double));
    }
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            A[i][j] = rand() % 5;
            B[i][j] = rand() % 5;
        }
    }
    matmult_lib(m, n, k, A, B, C);
    printf("A:\n");
    printMatrix(A, m, n);
    printf("B:\n");
    printMatrix(B, m, n);
    printf("C:\n");
    printMatrix(C, m, n);

    return 0;
}