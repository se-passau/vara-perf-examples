#include <stdlib.h>

int main() {
  int rc;

  char *t = 
  ___REGION_START __RT_Commit "getenv"
  getenv("gude");
  ___REGION_END __RT_Commit "getenv"

  if (t != NULL) {
    rc = 4711;
  } else {
    rc = 42;
  }
  return rc;
}