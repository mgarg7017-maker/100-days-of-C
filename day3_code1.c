#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    float c,f;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (c * 9/5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit", c, f);

    return (0);
}
madhavgarg@Madhavs-MacBook-Air ~ % cd desktop
madhavgarg@Madhavs-MacBook-Air desktop % clang day3_code1.c -o day3_code1
madhavgarg@Madhavs-MacBook-Air desktop % ./day3_code1
Enter temperature in Celsius: 33
33.00 Celsius = 91.40 Fahrenheit%     