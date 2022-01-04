void
matmult_nkm(int m, int n, int k, double **A, double **B, double **C) {
    
    int i, j, l;


    for(j = 0; j < n; j++){
        for(l = 0; l < k; l++) {
            for(i = 0; i < m; i++) {
                C[i][j] += A[i][l] + B[l][j];
            }
        }
    }
}
