#include <iostream>

int main() {
    int firstSummand = 1;
    int secondSummand = 1;
    int fibSum = 0;

    ___REGION_START __RT_High "one"
    while(1){
        fibSum = firstSummand + secondSummand;
        firstSummand = secondSummand;
        secondSummand = fibSum;
        if(fibSum == 377){
            break;
        }
    }
    ___REGION_END __RT_High "one"
    std::exit(42);

    return 0;
}