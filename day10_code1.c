#include <stdio.h>

int main() {
    int side1, side2, side3;

    if (scanf("%d %d %d", &side1, &side2, &side3) != 3) {
        printf("Invalid Input\n");
        return 1;
    }

    if (side1 == side2 && side2 == side3) {
        printf("Equilateral\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }

    return 0;
}
madhavgarg@Madhavs-MacBook-Air ~ % cd desktop
madhavgarg@Madhavs-MacBook-Air desktop % clang day10_code1.c -o day10_code1
madhavgarg@Madhavs-MacBook-Air desktop % ./day10_code1
3 3 3
Equilateral