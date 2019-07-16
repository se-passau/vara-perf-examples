int main() {
  ___REGION_START __RT_Commit "getenv"
  char *t = getenv("gude");
  ___REGION_END __RT_Commit "getenv"

  switch ((int)t) {
  case 0:;
    int a = 42;
  default:;
    int b = 4711;
  }

  return 0;
}