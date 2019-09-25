#include <stdlib.h>

struct s2 {
  char *t;
  char *ut;
};

struct s1 {
  char *t;
  struct s2 s2;
};

void foo(struct s2 *s2) { char *t1 = s2->t; }

int main() {
  struct s1 s1;
  s1.s2.t = 
  ___REGION_START __RT_Commit "getenv"
  getenv("gude");
  ___REGION_END __RT_Commit "getenv"

  foo(&s1.s2);

  return 0;
}