#include <stdlib.h>

int main() {
  char *t = 
  ___REGION_START __RT_Commit "getenv"
  getenv("gude");
  ___REGION_END __RT_Commit "getenv"

  switch ((int)(size_t)t) {
    case 0: {
      int a = 42;
    }
    default:
    int b = 4711;
  }

  return 0;
}