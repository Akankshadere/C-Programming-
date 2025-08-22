/*Accept three dimensions length (l), breadth(b) and height(h) of a cuboid and 
print surface area and volume. (Hint: surface area=2(lb + lh +bh), volume = lbh)*/

#include <stdio.h>
int main(){

    float l, b, h;
    float area, volume;

    printf("Enter lenght of cube(l): ");
    scanf("%f", &l);

    printf("Enter breadth of cube(b): ");
    scanf("%f", &b);

    printf("Enter height of cube(h): ");
    scanf("%f", &h);

    area = 2*(l*b + l*h + b*h);
    printf("area of cube: %f", area);

    volume = l*b*h;
    printf("volume of cube: %f", volume);

    return 0;

}