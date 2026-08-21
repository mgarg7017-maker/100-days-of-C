#include<stdio.h>
int main()
{
    int year;
    
    printf("Enter a year: ");
    scanf("%d",&year);

    if((year%4==0 && year%100!=0) || (year%400==0))
    {
        printf("%d is a leap year\n",year);
    }
    else
    {
        printf("%d is not a leap year\n",year);
    }

    return 0;
}
madhavgarg@Madhavs-MacBook-Air ~ % cd desktop
madhavgarg@Madhavs-MacBook-Air desktop % clang day7_code1.c -o day7_code1
madhavgarg@Madhavs-MacBook-Air desktop % ./day7_code1
Enter a year: 2033
2033 is not a leap year