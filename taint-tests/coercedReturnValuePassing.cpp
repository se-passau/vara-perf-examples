#include <stdlib.h>

struct s1 {
  int a;
  int b;
  char *t;
};

struct s1 foo() {
  struct s1 s1;
  ___REGION_START __RT_Commit "getenv"
  s1.t = getenv("gude");
  ___REGION_END __RT_Commit "getenv"

  return s1;
}
int main() {
  struct s1 s1 = foo();

  char *t = s1.t;

  return 0;
}