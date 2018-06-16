#include <stdio.h>

int main() {
    ___REGION_START __RT_High "0"
    int a = 42;

    if (a == 42) {
        ___REGION_START __RT_High "1" 
        puts("If");
        ___REGION_END __RT_High "1"
    } else {
        puts("Else");
    }
    puts("Hello, World!");
    ___REGION_END __RT_High "0"
    return 0;
}

