//rectangle lentgh and breadth is input and find its perimeter and area

#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
    int area ,perimeter, L, B;

    printf("Enter the length :");
    scanf("%d", &L);
   
    printf("Enter the bredth :");
    scanf("%d", &B);

    area= L*B ;
    perimeter = 2*(L+B);

    printf("Area of rectangle is : %d", area);

    printf("\nPerimeter of rectangle is : %d", perimeter);


    return (0);
}
madhavgarg@Madhavs-MacBook-Air ~ % cd desktop
madhavgarg@Madhavs-MacBook-Air desktop % clang day2_code1.c -o day2_code1
madhavgarg@Madhavs-MacBook-Air desktop % ./day2_code1
Enter the length :23
Enter the bredth :13
Area of rectangle is : 299
Perimeter of rectangle is : 72%        