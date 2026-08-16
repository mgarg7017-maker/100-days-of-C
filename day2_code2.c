//WAP to calculate a circle radius and circumference
#include<stdio.h>

int main(){

    float radius;
    
    
    printf("Enter radius: ");
    scanf("%f",&radius);

    float pi= 3.1415 ;
    float area= pi*radius*radius ;
    float circumference = pi*2*radius;

    printf("The area of circle is: %.2f\n", area);
    printf("Circumeference of circle is %.f", circumference);

    return 0;
}
madhavgarg@Madhavs-MacBook-Air ~ % cd desktop
madhavgarg@Madhavs-MacBook-Air desktop % clang day2_code2.c -o day2_code2
madhavgarg@Madhavs-MacBook-Air desktop % ./day2_code2
Enter radius: 15
The area of circle is: 706.84
Circumeference of circle is 94%     