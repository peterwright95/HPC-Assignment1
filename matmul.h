#ifndef __MATMUL_H
#define __MATMUL_H

void matmul_mnk(int m, int n, int k, double **A, double **B, double **C);
void matmul_mkn(int m, int n, int k, double **A, double **B, double **C);
void matmul_nkm(int m, int n, int k, double **A, double **B, double **C);
void matmul_nmk(int m, int n, int k, double **A, double **B, double **C);
void matmul_kmn(int m, int n, int k, double **A, double **B, double **C);
void matmul_knm(int m, int n, int k, double **A, double **B, double **C);

#endif
