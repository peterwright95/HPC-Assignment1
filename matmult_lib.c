#include "CBLAS/cblas.h"

void
matmult_lib(int m, int n, int k, double **A, double **B, double **C) {

    cblas_dgemm(CblasRowMajor, CblasNoTrans, CblasNoTrans, m, n, k, 1, *A, m, *B, k, 0, *C, m);
}
