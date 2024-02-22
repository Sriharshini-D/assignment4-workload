
#ifndef __MATMUL_BLOCK_IK_MULTIPLY_H__
#define __MATMUL_BLOCK_IK_MULTIPLY_H__

void multiply(double** A, double** B, double** C, int matrix_size, int block_size)
{
    for (int ii = 0; ii < matrix_size; ii += block_size) {
        for (int kk = 0; kk < matrix_size; kk += block_size) {
            for (int j = 0; j < matrix_size; j++) {
                for (int i = ii; i < ii + block_size; i++) {
                    for (int k = kk; k < kk + block_size; k++) {
                        C[i][j] += A[i][k] * B[k][j];
                    }
                }
            }
        }
    }
}

#endif // __MATMUL_BLOCK_IK_MULTIPLY_H__
