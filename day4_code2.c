#include <stdio.h>

int main(void) {
    int n;
    
    if (scanf("%d", &n) == 1) {
        int sum = n * (n + 1) / 2;
        printf("Sum=%d\n", sum);
    }
    
    return 0;
}
madhavgarg@Madhavs-MacBook-Air ~ % cd desktop
madhavgarg@Madhavs-MacBook-Air desktop % clang day4_code2.c -o day4_code2
madhavgarg@Madhavs-MacBook-Air desktop % ./day4_code2
5
Sum=15
