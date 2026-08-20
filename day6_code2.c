#include<stdio.h>
int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    if(number>0)
    {
        printf("%d is a positive number\n",number);
    }
    else if(number<0)
    {
        printf("%d is a negative number\n",number);
    }
    else
    {
        printf("The number is zero\n");
    }

    return 0;
}
madhavgarg@Madhavs-MacBook-Air ~ % cd desktop
madhavgarg@Madhavs-MacBook-Air desktop % clang day6_code2.c -o day6_code2
madhavgarg@Madhavs-MacBook-Air desktop % ./day6_code2
Enter a number: 34
34 is a positive number