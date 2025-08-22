/*Accept dimensions of a cylinder and print the surface area and volume. (Hint: 
surface area = 2 πr2+ 2πrh, volume = πr2h) */

#include<stdio.h>
int main()
{
    float pi = 3.14159;
    float area, volume, r, h;

    printf("Enter radius of cylinder: ");
    scanf("%f", &r);


    printf("Enter height of cylinder: ");
    scanf("%f", &h);


    area = 2*pi*r*r+2*pi*r*h;
    printf("area of cylinder %f\n", area);

    volume = pi*r*r*h;
    printf("volume of cylinder %f\n", volume);

    return 0;

}