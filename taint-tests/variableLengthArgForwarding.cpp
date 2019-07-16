#include <stdlib.h>
#include <stdarg.h>

void bar(va_list ap) { char *t = va_arg(ap, char *); }

void foo(int n, ...) {
  va_list ap;

  va_start(ap, n);

  bar(ap);

  va_end(ap);
}

int main() {
  ___REGION_START __RT_Commit "getenv"
  char *t = getenv("gude");
  ___REGION_END __RT_Commit "getenv"

  foo(1, t);

  return 0;
}