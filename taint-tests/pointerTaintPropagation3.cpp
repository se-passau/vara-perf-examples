int main() {
  ___REGION_START __RT_Commit "getenv"
  char *t1 = getenv("gude");
  ___REGION_END __RT_Commit "getenv"
  char **t2 = &t1;
  char ***t3 = &t2;

  char **t4 = *t3;
  *t3 = ret_of_the_untainted();

  return 0;
}