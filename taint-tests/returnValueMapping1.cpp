#include <stdlib.h>

int main() {
  ___REGION_START __RT_Commit "getenv"
  char *t = getenv("gude");
  ___REGION_END __RT_Commit "getenv"
  
  int rc = (int)(size_t)t;

  if (rc)
    return rc;

  return rc + 1;
}
