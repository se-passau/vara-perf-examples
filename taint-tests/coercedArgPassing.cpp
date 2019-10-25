#include <stdlib.h>

struct s1 {
  int a;
  int b;
  char *t;
};

void foo(struct s1 s1) { char *t1 = s1.t; }

int main() {

  struct s1 struct1;
  struct1.t = 
  ___REGION_START __RT_Commit "getenv"
  getenv("gude");
  ___REGION_END __RT_Commit "getenv"

  foo(struct1);

  return 0;
}