#include <iostream>
#include <linux/limits.h>

using namespace std;

struct Foo {
  int i;
};

struct Bar {
  Bar() {}
  Bar(char a, char b, char c, char d) : a(a), b(b), c(c), d(d) {}
  char a;
  char b;
  char c;
  char d;
};

union Merged {
  Bar b;
  Foo f;
};

int main() {
  char taint = 
  ___REGION_START __RT_Commit "getenv"
  getenv("gude")
  ___REGION_END __RT_Commit "getenv"
  [0];

  Merged m{Bar{'a', taint, 'c', 'd'}};

  int tainted_int = m.f.i;
  char original_taint = ((char *)&m.f.i)[1];

  // reuse, if check-not directive is available
  // char not_taint = ((char*) &m.f.i)[0];

  return 0;
}
