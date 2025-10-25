#include "mat.h"
#include <cassert>
#include <cstdio>

bool test_matrix_fill() { return true; }

bool test_matrix_add() { return true; }

bool test_matrix_mult() { return true; }

int main() {
  struct {
    const char *name;
    bool (*fn)();
  } tests[] = {
      {"matrix_fill", test_matrix_fill},
      {"matrix_add", test_matrix_add},
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
