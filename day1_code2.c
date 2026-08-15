//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main(void)
{
    int a , b , add , sub ,  multiply , divide ;

    printf(" enter 1st number :");
    scanf("%d", &a);

    printf(" enter second number :");
    scanf("%d", &b);

    add= a+b;
    sub= a-b;
    multiply= a*b;
    divide= a/b;

    printf("sum = %d", add);
    printf("\nDiff = %d", sub);
    printf("\nProduct = %d", multiply);
    printf("\nQuotient = %d", divide);
    return (0);
}
madhavgarg@Madhavs-MacBook-Air ~ % cd desktop
madhavgarg@Madhavs-MacBook-Air desktop % clang day1_code2.c -o day1_code2
madhavgarg@Madhavs-MacBook-Air desktop % ./day1_code2
3
 enter 1st number : enter second number :1 2
sum = 4
Diff = 2
Product = 3
Quotient = 3%                                                                                                           madhavgarg@Madhavs-MacBook-Air desktop % 



