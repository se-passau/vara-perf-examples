#include <stdlib.h>

char* tainter() {
  throw "You shall not pass!";
  return 
    ___REGION_START __RT_Commit "getenv"
  getenv("gude");
  ___REGION_END __RT_Commit "getenv"
}

int main() {
  char* is_tainted;

  try {
    is_tainted = tainter();
  } catch (...) {
    // do stuff
  }

  return 0;
}
