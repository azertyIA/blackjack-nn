#include "mat.h"
#include <stdlib.h>

Matrix mat_alloc(size_t rows, size_t cols) {
  Matrix m;
  m.rows = rows;
  m.cols = cols;
  m.stride = cols;
  m.data = (float *)malloc(rows * cols * sizeof(float));
  return m;
}

void mat_free(Matrix m) { free(m.data); }

void mat_preview(Matrix m) {}

void mat_fill(Matrix a, float c) {}

void mat_scale(Matrix dst, Matrix a, float c) {}

void mat_add(Matrix dst, Matrix a, Matrix b) {}

void mat_mult(Matrix dst, Matrix a, Matrix b) {}
