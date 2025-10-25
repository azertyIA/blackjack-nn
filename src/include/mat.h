#include <stddef.h>

typedef struct {
  size_t rows, cols, stride;
  float *data;
} Matrix;

#define MAT_AT(m, i, j) (m).data[(i) * (m).stride + (j)]

Matrix mat_alloc(size_t rows, size_t cols);
void mat_free(Matrix m);

void mat_preview(Matrix m);

void mat_fill(Matrix a, float c);
void mat_scale(Matrix dst, Matrix a, float c);

void mat_add(Matrix dst, Matrix a, Matrix b);
void mat_mult(Matrix dst, Matrix a, Matrix b);
