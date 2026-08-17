#include <stdio.h>

int main(void)
{
        int num1, num2;

    printf("Enter first value :");
    scanf("%d", &num1);
    printf("Enter second value :");
    scanf("%d", &num2);

    int temp = num1;
    num1=num2;
    num2= temp;

    printf("After swapping a = %d and b = %d\n", num1, num2);

    return (0);
}
madhavgarg@Madhavs-MacBook-Air ~ % cd desktop
madhavgarg@Madhavs-MacBook-Air desktop % clang day3_code2.c -o day3_code2
madhavgarg@Madhavs-MacBook-Air desktop % ./day3_code2
Enter first value :6
Enter second value :3
After swapping a = 3 and b = 6
