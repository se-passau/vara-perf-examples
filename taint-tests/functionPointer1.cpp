#include <cstdio>
#include <stdlib.h>

struct Base {
  virtual int doStuff() { return 0; }
};

struct Foo : public Base {
  int doStuff() override { return 0; }
};

struct Bar : public Base {
  int doStuff() override {
    // this taints
    return (int)(size_t)
    ___REGION_START __RT_Commit "getenv"
    getenv("gude");
    ___REGION_END __RT_Commit "getenv"
  }
};

int main() {

  Base *b = nullptr;
  if (b && !b) {
    b = new Foo();
  } else {
    // b holds pointer to tainting function
    b = new Bar();
  }

  int tainted_prob = b->doStuff();

  return 0;
}
