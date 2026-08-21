#include <stdio.h>

int main() {
    float num1, num2, sum;

    // Input two numbers separated by a space
    if (scanf("%f %f", &num1, &num2) == 2) {
        sum = num1 + num2;

        // Print as integer if there is no fractional part
        if (sum == (int)sum) {
            printf("Sum = %d\n", (int)sum);
        } else {
            printf("Sum = %.2f\n", sum);
        }
    }

    return 0;
}
Last login: Fri Aug 21 09:54:25 on ttys000
madhavgarg@Madhavs-MacBook-Air ~ % cd desktop
madhavgarg@Madhavs-MacBook-Air desktop % clang day1_code1.c -o day1_code1
madhavgarg@Madhavs-MacBook-Air desktop % ./day1_code1
3 4
Sum = 7
madhavgarg@Madhavs-MacBook-Air desktop % 

