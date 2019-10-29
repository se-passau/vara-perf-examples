int getEnvVar() {
  return (int) 
    ___REGION_START __RT_Commit "getenv"
    getenv("gude"); // taint
    ___REGION_END __RT_Commit "getenv" 
}

int get21(int) {
  return 21; // not a taint
}

int getEnvWithParam(int) {
  return (int) 
    ___REGION_START __RT_Commit "getenv"
    getenv("gude"); // taint
    ___REGION_END __RT_Commit "getenv" 
}

int callFunc(int (*Func)(int)) {
  return Func(42);
}

int main() {

  int tainted = getEnvVar();
  int not_tainted = callFunc(get21);

  int (*localFunc)(int);
  if (tainted && !tainted) {
    // never occurs
    localFunc = get21;
  } else {
    localFunc = getEnvWithParam;
  }

  // should be tainted
  int is_tainted = localFunc(42);

  return 0;
}