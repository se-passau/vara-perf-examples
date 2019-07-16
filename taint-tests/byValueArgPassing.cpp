#include <stdlib.h>

struct s1 {
  int a;
  char *t;
  char *ut;
};

void foo(struct s1 s1) { char *t1 = s1.t; }

int main() {
  struct s1 s1;
  ___REGION_START __RT_Commit "getenv"
  s1.t = getenv("gude");
  ___REGION_END __RT_Commit "getenv"  

  foo(s1);

  return 0;
}