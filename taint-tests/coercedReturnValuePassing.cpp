#include <stdlib.h>

struct s1 {
  int a;
  int b;
  char *t;
};

struct s1 foo() {
  struct s1 struct1;
  struct1.t = 
  ___REGION_START __RT_Commit "getenv"
  getenv("gude");
  ___REGION_END __RT_Commit "getenv"

  return s1;
}
int main() {
  struct s1 struct1 = foo();

  char *t = struct1.t;

  return 0;
}