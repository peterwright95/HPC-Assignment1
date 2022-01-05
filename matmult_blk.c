// Warning : bs has to divide m, n and k, otherwise part of the calculations won't be done

void
matmult_blk(int m, int n, int k, double **A, double **B, double **C, int bs) {
    int i, j, l, p, q, r;

    for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
    		C[i][j] = 0;
    	}
    }
    int ps = m/bs;
    int qs = n/bs;
    int rs = k/bs;

    for(p=0; p<ps; p++)
        for(q=0; q<qs; q++)
            for(r=0; r<rs; r++)
                for(i=0; i<bs; i++)
                    for(j=0; j<bs; j++)
                        for(l=0; l<bs; l++)
                            C[p*bs+i][r*bs+l] += A[p*bs+i][q*bs+j] * B[q*bs+j][r*bs+l];

}
