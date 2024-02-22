
#ifndef __MATMUL_BLOCK_IJ_MULTIPLY_H__
#define __MATMUL_BLOCK_IJ_MULTIPLY_H__

void multiply(double** A, double** B, double** C, int matrix_size, int block_size)
{
    for (int ii = 0; ii < matrix_size; ii += block_size) {
        for (int jj = 0; jj < matrix_size; jj += block_size) {
            for (int k = 0; k < matrix_size; k++) {
                for (int i = ii; i < ii + block_size; i++) {
                    for (int j = jj; j < jj + block_size; j++) {
                        C[i][j] += A[i][k] * B[k][j];
                    }
                }
            }
        }
    }
}

#endif // __MATMUL_BLOCK_IJ_MULTIPLY_H__
