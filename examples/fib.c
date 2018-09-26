#include <stdio.h>
int main() {
    ___REGION_START __RT_High "0"
    int t1 = 0, t2 = 1, nextTerm = 0, n = 10000;

    printf("Fibonacci Series: %d, %d, ", t1, t2);

    nextTerm = t1 + t2;

    while(nextTerm <= n) {
        ___REGION_START __RT_High "1"
        printf("%d, ",nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
        ___REGION_END __RT_High "1"
    }
    ___REGION_END __RT_High "0"
    return 0;
}
