/* Accept the x and y coordinates of two points and compute the distance between 
the two points. */

#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, distance;

    printf("Enter coordinates of first point(x1 y1): ");
    scanf("%f%f", &x1, &x2);

    printf("Enter coordinates of second point(x2 y2): ");
    scanf("%f%f", &x2, &y2);

    distance = sqrt(x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);

    printf("Distance between the two points = %f\n", distance);

    return 0;

}