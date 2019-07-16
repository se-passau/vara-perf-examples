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
  struct s1 *s2 = new struct s1;

  ___REGION_START __RT_Commit "getenv"
  s2->t = getenv("gude");
  ___REGION_END __RT_Commit "getenv"

  struct s2 *s2P = new struct s2;
  struct s1 s1 = {"test", *s2P};

  char *t1 = s1.s2.t;

  return 0;
}