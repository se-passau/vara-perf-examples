#include <stdlib.h>
#include <stdarg.h>

void bar(va_list ap) { char *s = va_arg(ap, char *); }

void foo(int n, ...) {
  va_list ap;

  va_start(ap, n);

  bar(ap);

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