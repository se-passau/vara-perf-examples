#include <stdio.h>
#include <stdlib.h>

int main() {
    ___REGION_START__RT_HIGH "0"
    int a = 42;
    puts(itoa(a));
    ___REGION_END__RT_HIGH "0"
    return 0;
}

