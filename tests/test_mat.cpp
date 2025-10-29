#include "mat.h"
#include <cassert>
#include <cstdio>

bool test_matrix_fill() {
  const float TEST = 5.0f;
  Matrix a = mat_alloc(100, 100);

  mat_fill(a, TEST);

  for (int i = 0; i < 100 * 100; i++) {
    if (a.data[i] == TEST)
      continue;
    mat_free(a);
    return false;
  }

  mat_free(a);
  return true;
}

bool test_matrix_add() {
  const float A_TEST = 2.0f;
  const float B_TEST = 3.0f;
  Matrix a = mat_alloc(100, 100);
  Matrix b = mat_alloc(100, 100);
  Matrix c = mat_alloc(100, 100);

  mat_fill(a, A_TEST);
  mat_fill(b, B_TEST);
  mat_add(c, a, b);

  for (int i = 0; i < 100 * 100; i++) {
    if (c.data[i] == A_TEST + B_TEST)
      continue;
    mat_free(a);
    mat_free(b);
    mat_free(c);
    return false;
  }

  mat_free(a);
  mat_free(b);
  mat_free(c);
  return true;
}

bool test_matrix_scale() {
  const float A_TEST = 2.0f;
  const float C_TEST = 3.0f;
  Matrix a = mat_alloc(100, 100);
  Matrix b = mat_alloc(100, 100);

  mat_fill(a, A_TEST);
  mat_scale(b, a, C_TEST);

  for (int i = 0; i < 100 * 100; i++) {
    if (b.data[i] == A_TEST * C_TEST)
      continue;
    mat_free(a);
    mat_free(b);
    return false;
  }

  mat_free(a);
  mat_free(b);
  return true;
}

bool test_matrix_mult() {
  const float TEST = 2.0f;
  return true;
}

int main() {
  struct {
    const char *name;
    bool (*fn)();
  } tests[] = {
      {"matrix_fill", test_matrix_fill},
      {"matrix_add", test_matrix_add},
      {"matrix_scale", test_matrix_scale},
      {"matrix_mult", test_matrix_mult},
  };

  int failures = 0;
  for (auto &t : tests) {
    bool ok = t.fn();
    if (!ok)
      return 1;
  }
  return 0;
}
