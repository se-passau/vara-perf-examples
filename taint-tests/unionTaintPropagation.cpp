#include <stdlib.h>

union u1 {
  char *strings[2][2];
  int a;
};

int main() {
  union u1 u;
  ___REGION_START __RT_Commit "getenv"
  u.strings[0][1] = getenv("gude");
  ___REGION_END __RT_Commit "getenv"


  char *t1 = u.strings[0][1];
  char *t2 = u.strings[1][0];
  int a = u.a;

  return 0;
}