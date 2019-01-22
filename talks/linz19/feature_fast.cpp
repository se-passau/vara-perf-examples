#include <time.h>

void sleep(int Seconds) {
  timespec t;
  t.tv_sec = Seconds;
  t.tv_nsec = 0;
  nanosleep(&t, nullptr);
}

int conf_opt = 0;
int conf_opt_fast = 0;

int main(int argc, char *argv[]) {
  conf_opt = argc - 1;
  conf_opt_fast = conf_opt == 2;

  if (conf_opt) {
    if (conf_opt_fast) {
      sleep(2);
    } else {
      sleep(5);
    }
  } else {
    sleep(1);
  }

  return 0;
}
