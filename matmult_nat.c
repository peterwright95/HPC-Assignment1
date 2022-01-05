void
matmul_nat(int m, int n, int k, double **A, double **B, double **C) {
    
    int i, j, l;

    for(i = 0; i < m; j++){
        for(j = 0; j < n; i++) {
            for(l = 0; l < k; l++) {
                C[i][j] += A[i][l] * B[l][j];
            }
        }
    }
}
