#include<stdio.h>
int main()
{
    int principal, rate, time,SI,CI;

    printf("Enter principal amount: ");
    scanf("%d", &principal);
    printf("Enter rate of interest: ");
    scanf("%d", &rate);
    printf("Enter time in years: ");
    scanf("%d", &time);

    SI = (principal * rate * time) / 100;
    CI = principal * (1 + rate / 100) * time - principal;
    printf("Simple Interest is: %d\n", SI);
    printf("Compound Interest is: %d\n", CI);
    return 0;
}
madhavgarg@Madhavs-MacBook-Air ~ % cd desktop
madhavgarg@Madhavs-MacBook-Air desktop % clang day5_code1.c -o day5_code1
madhavgarg@Madhavs-MacBook-Air desktop % ./day5_code1
Enter principal amount: 5000
Enter rate of interest: 10
Enter time in years: 5
Simple Interest is: 2500
Compound Interest is: 20000
