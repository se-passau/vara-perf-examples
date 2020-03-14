#include <stdlib.h>

int main() {
  char *t = 
  ___REGION_START __RT_Commit "getenv"
  getenv("gude");
  ___REGION_END __RT_Commit "getenv"
  
  int rc = (int)(size_t)t;

  if (rc)
    return rc;

  return rc + 1;
}
