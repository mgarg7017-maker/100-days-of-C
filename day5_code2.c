#include<stdio.h>
int main()
{
    int second, minute, hour;

    printf("Enter time in seconds: ");
    scanf("%d", &second);

    hour = second / 3600;
    minute = (second % 3600) / 60;
    second = second % 60;
    printf("Time is: %d hours:%d minutes:%d seconds", hour, minute, second);

    return 0;
}
madhavgarg@Madhavs-MacBook-Air ~ % cd desktop
madhavgarg@Madhavs-MacBook-Air desktop % clang day5_code2.c -o day5_code2
madhavgarg@Madhavs-MacBook-Air desktop % ./day5_code2
Enter time in seconds: 39000
Time is: 10 hours:50 minutes:0 seconds%  