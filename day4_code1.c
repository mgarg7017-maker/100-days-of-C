// WAP to swap two numbers without using a third variable 
#include <stdio.h>

int main(void)
{
    int a ,b ;
    printf("Enter first number :");
    scanf("%d", &a);

    printf("Enter second number :");
    scanf("%d", &b);

    // Arithmetic operations to swap values
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d, b = %d\n", a, b);

    return (0);
} 
madhavgarg@Madhavs-MacBook-Air ~ % cd desktop
madhavgarg@Madhavs-MacBook-Air desktop % clang day4_code1.c -o day4_code1
madhavgarg@Madhavs-MacBook-Air desktop % ./day4_code1
Enter first number :23
Enter second number :12
a = 12, b = 23
