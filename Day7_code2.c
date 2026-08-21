#include<stdio.h>
int main()
{
    char character;

    printf("Enter a character: ");
    scanf("%c",&character);

    if(character==65 || character==69 || character==73 || character==79 || character==85 || character==97 || character==101 || character==105 || character==111 || character==117)
    {
        printf("%c is a vowel\n",character);
    }
    else
    {
        printf("%c is a consonant\n",character);
    }

    return 0;
}
madhavgarg@Madhavs-MacBook-Air ~ % cd desktop
madhavgarg@Madhavs-MacBook-Air desktop % clang Day7_code2.c -o Day7_code2
madhavgarg@Madhavs-MacBook-Air desktop % ./day7_code2
Enter a character: u
u is a vowel
madhavgarg@Madhavs-MacBook-Air desktop % ./day7_code2
Enter a character: x
x is a consonant