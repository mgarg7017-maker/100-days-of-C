#include <stdio.h>

int main() {
    float cp, sp, result;

    if (scanf("%f %f", &cp, &sp) != 2) {
        return 1;
    }

    if (sp > cp) {
        result = ((sp - cp) / cp) * 100;
        printf("Profit %.0f%%\n", result);
    } 
    else if (cp > sp) {
        result = ((cp - sp) / cp) * 100;
        printf("Loss %.0f%%\n", result);
    } 
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
madhavgarg@Madhavs-MacBook-Air ~ % cd desktop
madhavgarg@Madhavs-MacBook-Air desktop % clang day11_code2.c -o day11_code2
madhavgarg@Madhavs-MacBook-Air desktop % ./day11_code2
23 34
Profit 48%
