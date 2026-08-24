#include<stdio.h>
int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    if(number%2==0)
    {
        printf("%d is an even number\n",number);
    }
    else
    {
        printf("%d is an odd number\n",number);
    }   

    return 0;
}
madhavgarg@Madhavs-MacBook-Air ~ % cd desktop
madhavgarg@Madhavs-MacBook-Air desktop % clang day6_code1.c -o day6_code1
madhavgarg@Madhavs-MacBook-Air desktop % ./day6_code1
Enter a number: 2
2 is an even number
