#include "nn.h"
#include <cassert>
#include <cstdio>

bool test_nn_init() { return true; }

bool test_nn_forward() { return true; }

bool test_nn_bprop() { return true; }

int main() {
  struct {
    const char *name;
    bool (*fn)();
  } tests[] = {
      {"nn_init", test_nn_init},
      {"nn_forward", test_nn_forward},
      {"nn_bprop", test_nn_bprop},
  };

  int failures = 0;
  for (auto &t : tests) {
    bool ok = t.fn();
    if (!ok)
      return 1;
  }
  return 0;
}
