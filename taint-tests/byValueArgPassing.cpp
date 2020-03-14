#include <stdlib.h>

struct s1 {
  int a;
  char *t;
  char *ut;
};

void foo(char* t) { char *t1 = t; }

int main() {
  struct s1 struct1;
  struct1.t = 
  ___REGION_START __RT_Commit "getenv"
  getenv("gude");
  ___REGION_END __RT_Commit "getenv"  

  foo(struct1.t);

  return 0;
}