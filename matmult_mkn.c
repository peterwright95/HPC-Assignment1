void
matmult_mkn(int m, int n, int k, double **A, double **B, double **C) {
    
    int i, j, l;


    for(i = 0; i < m; i++){
        for(l = 0; l < k; l++) {
            for(j = 0; j < n; j++) {
                C[i][j] += A[i][l] * B[l][j];
            }
        }
    }
}

