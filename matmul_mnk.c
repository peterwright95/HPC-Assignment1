void
matmul_mnk(int m, int n, int k, double **A, double **B, double **C) {
    
    int i, j, l;

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++) {
            for(l = 0; l < k; l++) {
                C[i][j] += A[i][j] + B[i][j];
            }
        }
    }
}