#include <math.h>

void matmult_blk(int m, int n, int k, double **A, double **B, double **C, int bs)
{
    int i, j, l, p, q, r;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            C[i][j] = 0;
        }
    }

    for (p = 0; p < m; p += bs)
        for (r = 0; r < k; r += bs)
            for (q = 0; q < n; q += bs)
                for (i = p; i < fmin(bs + p, m); i++)
                    for (l = r; l < fmin(bs + r, k); l++)
                        for (j = q; j < fmin(bs + q, n); j++)
                            C[i][j] += A[i][l] * B[l][j];
}
