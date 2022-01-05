#include "CBLAS/cblas.h"

void
matmult_lib(int m, int n, int k, double **A, double **B, double **C) {
    
    int i, j;
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            C[i][j] = 0;
        }
    }
    
    cblas_dgemm(CblasColMajor, CblasNoTrans, CblasNoTrans, m, n, k, 1, A, m, B, k, 0, C, m);
}
