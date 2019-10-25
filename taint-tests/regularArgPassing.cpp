#include <stdlib.h>

struct s2 {
  char *t;
  char *ut;
};

struct s1 {
  char *t;
  struct s2 struct2;
};

void foo(struct s2 *struct2) { char *t1 = struct2->t; }

int main() {
  struct s1 struct1;
  struct1.struct2.t = 
  ___REGION_START __RT_Commit "getenv"
  getenv("gude");
  ___REGION_END __RT_Commit "getenv"

  foo(&struct1.struct2);

  return 0;
}