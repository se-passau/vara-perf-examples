#include <stdlib.h>

char** retNonTaintedString () {
  char* a = "gude";
  return &a;
}

int main() {
  char *t1 = 
  ___REGION_START __RT_Commit "getenv"
  getenv("gude");
  ___REGION_END __RT_Commit "getenv"
  char **t2 = &t1;
  char ***t3 = &t2;
  char **t4 = *t3;

  *t3 = retNonTaintedString();

  return 0;
}