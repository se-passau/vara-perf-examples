#include <stdlib.h>

char *foo() {
  char *t = 
  ___REGION_START __RT_Commit "getenv"
  getenv("gude");
  ___REGION_END __RT_Commit "getenv"

  return t;
}

int main() {
  char *t = foo();

  return 0;
}