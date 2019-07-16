#include <stdlib.h>

int main() {
  ___REGION_START __RT_Commit "getenv"
  char *t1 = getenv("gude");
  ___REGION_END __RT_Commit "getenv"
  char **t2 = &t1;

  char *t3 = *t2;

  return 0;
}