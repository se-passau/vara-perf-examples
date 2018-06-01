#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>

struct MyClass {
  MyClass(int X) : X(X) {}

  int X;
};

bool operator<(const MyClass &LHS, const MyClass &RHS) { return LHS.X < RHS.X; }

std::ostream &operator<<(std::ostream &cout, const MyClass &M) {
  cout << M.X;
  return cout;
}

template <typename T> void dump(const std::vector<T> &V) {
  std::string Sep;
  for (auto E : V) {
    std::cout << Sep << E;
    Sep = ", ";
  }
  std::cout << std::endl;
}

template <class IteratorT> void mySort(IteratorT First, IteratorT Last) {

  for (IteratorT outer = First; outer < Last; ++outer) {
    for (IteratorT inner = Last - 1; inner > outer; --inner) {
      if (*inner < *(inner - 1)) {
        std::swap(*inner, *(inner - 1));
      }
    }
  }
}

int main(int argc, char *argv[]) {
  bool Feature = false;

  if (argc > 1) {
    if (!std::strcmp(argv[1], "-Foo")) {
      Feature = true;
    }
  }

  std::vector<int> Vec = {3, 5, 6, 7, 5, 87, 4, 3, 7};

  dump(Vec);
  if (Feature) {
    mySort(Vec.begin(), Vec.end());
  } else {
    std::sort(Vec.begin(), Vec.end());
  }
  dump(Vec);

  return 0;
}
