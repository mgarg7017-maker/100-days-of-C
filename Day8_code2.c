#include<stdio.h>
int main()
{
    int num1,num2,num3;

    printf("Enter value of number 1:");
    scanf("%d",&num1);
    printf("Enter value of number 2:");
    scanf("%d",&num2);
    printf("Enter value of number 3:");
    scanf("%d",&num3);

    if(num1>num2 && num1>num3)
    {
        printf("%d is the greatest number\n",num1);
    }
    else if(num2>num1 && num2>num3)
    {
        printf("%d is the greatest number\n",num2);
    }
    else
    {
        printf("%d is the greatest number\n",num3);
    }

    return 0;
}
madhavgarg@Madhavs-MacBook-Air ~ % cd desktop
madhavgarg@Madhavs-MacBook-Air desktop % clang day8_code2.c -o day8_code2
madhavgarg@Madhavs-MacBook-Air desktop % ./day8_code2
Enter value of number 1:78
Enter value of number 2:56
Enter value of number 3:89
89 is the greatest number