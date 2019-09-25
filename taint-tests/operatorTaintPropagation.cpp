#include <stdlib.h>

int main() {
  char *t = 
    ___REGION_START __RT_Commit "getenv"
  getenv("gude");
  ___REGION_END __RT_Commit "getenv"

  int a = t != NULL ? 0 : 4711;
  int b = t && !t;
  int *c = (int *)t;

  return 0;
}