char *foo() {
  ___REGION_START __RT_Commit "getenv"
  char *t = getenv("gude");
  ___REGION_END __RT_Commit "getenv"

  return t;
}

int main() {
  char *t = foo();

  return 0;
}