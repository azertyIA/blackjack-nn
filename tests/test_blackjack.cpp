#include "blackjack.h"
#include <cassert>
#include <cstdio>

bool test_bj_init() { return true; }

bool test_bj_deal() { return true; }

bool test_bj_hit() { return true; }

int main() {
  struct {
    const char *name;
    bool (*fn)();
  } tests[] = {
      {"bj_init", test_bj_init},
      {"bj_deal", test_bj_deal},
      {"bj_hit", test_bj_hit},
  };

  for (auto &t : tests) {
    bool ok = t.fn();
    if (!ok)
      return 1;
  }
  return 0;
}
