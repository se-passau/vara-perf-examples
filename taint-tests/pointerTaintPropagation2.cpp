#include <stdio.h>
#include <stdlib.h>

struct s2 {
  char *t;
};

struct s1 {
  char *t;
  struct s2 s2;
};

int main() {
  struct s2 *s2P = new struct s2;

  ___REGION_START __RT_Commit "getenv"
  s2P->t = getenv("gude");
  ___REGION_END __RT_Commit "getenv"

  struct s1 s1P = {"test", *s2P};

  char *t1 = s1P.s2.t;

  return 0;
}