#include <stdio.h>
#include <stdlib.h>

int main() {
  struct s1 *s2 = malloc(sizeof *s2);

  ___REGION_START __RT_Commit "getenv"
  s2->t = getenv("gude");
  ___REGION_END __RT_Commit "getenv"

  struct s1 s1;
  s1.s2 = s2;

  char *t1 = s1.s2->t;

  return 0;
}