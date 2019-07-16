#include <stdlib.h>

int main() {

  char *strings[1024];
  ___REGION_START __RT_Commit "getenv"
  strings[42] = getenv("gude");
  ___REGION_END __RT_Commit "getenv"

  char **strings_ptr = strings;
  char *t1 = strings_ptr[42];

  return 0;
}

