#include <stdlib.h>

int main() {
    int rc = 0;
    for (int i = 0; i < 2; i++){
        if (i > 2)
          rc += (int)(size_t)
          ___REGION_START __RT_Commit "getenv"
          getenv("gude");
          ___REGION_END __RT_Commit "getenv"
    }
  return 0;
}