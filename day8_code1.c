#include<stdio.h>
int main()
{
    char character;

    printf("Enter a character: ");
    scanf("%c",&character);

    if(character>=65 && character<=90)
    {
        printf("%c is an uppercase letter\n",character);
    }
    else if(character>=97 && character<=122)
    {
        printf("%c is a lowercase letter\n",character);
    }
    else if(character>=48 && character<=57)
    {
        printf("%c is a digit\n",character);
    }
    else
    {
        printf("%c is a special character\n",character);
    }

    return 0;
}
madhavgarg@Madhavs-MacBook-Air ~ % cd desktop
madhavgarg@Madhavs-MacBook-Air desktop % clang day8_code1.c -o day8_code1
madhavgarg@Madhavs-MacBook-Air desktop % ./day8_code1
Enter a character: 3
3 is a digit
madhavgarg@Madhavs-MacBook-Air desktop % ./day8_code1
Enter a character: A
A is an uppercase letter
madhavgarg@Madhavs-MacBook-Air desktop % ./DAY8_CODE1
Enter a character: w
w is a lowercase letter
madhavgarg@Madhavs-MacBook-Air desktop % ./day8_code1
Enter a character: #
# is a special character
