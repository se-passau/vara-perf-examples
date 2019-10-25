#include <stdarg.h>
#include <stdlib.h>

void foo(int n, ...) {
  va_list ap;
  va_start(ap, n);
  char *n = va_arg(ap, char *);
  va_end(ap);
}

int main() {
  char *t = 
  ___REGION_START __RT_Commit "getenv"
  getenv("gude");
  ___REGION_END __RT_Commit "getenv"
  foo(1, t);
  
  return 0;
}