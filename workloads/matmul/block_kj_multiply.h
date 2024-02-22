
#ifndef __MATMUL_BLOCK_KJ_MULTIPLY_H__
#define __MATMUL_BLOCK_KJ_MULTIPLY_H__

void multiply(double** A, double** B, double** C, int matrix_size, int block_size)
{
    for (int kk = 0; kk < matrix_size; kk += block_size) {
        for (int jj = 0; jj < matrix_size; jj += block_size) {
            for (int i = 0; i < matrix_size; i++) {
                for (int k = kk; k < kk + block_size; k++) {
                    for (int j = jj; j < jj + block_size; j++) {
                        C[i][j] += A[i][k] * B[k][j];
                    }
                }
            }
        }
    }
}

#endif // __MATMUL_BLOCK_KJ_MULTIPLY_H__
