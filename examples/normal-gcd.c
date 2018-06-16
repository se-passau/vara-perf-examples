#include <stdio.h>
int main() {
    int n1 = 8;
    int n2 = 64;
    ___REGION_START __RT_HIGH "0"
    while(n1 != n2) {
        if(n1 > n2)
            ___REGION_START __RT_HIGH "1"
            n1 -= n2;
            ___REGION_END __RT_HIGH "1"
        else
            n2 -= n1;
    }
    printf("GCD = %d",n1);
    ___REGION_END __RT_HIGH "0"

    return 0;
}
