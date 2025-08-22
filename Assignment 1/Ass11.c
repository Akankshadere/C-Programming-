#include <stdio.h>
int main()
{
    float l, b, h, dl, dh, wl, wh;

    printf("Room l b h: ");
    scanf("%f %f %f",&l, &b, &h);

    printf("Door l h: ");
    scanf("%f %f",&dl, &dh);

    printf("Window l h: ");
    scanf("%f %f",&wl ,&wh);

    float wall = 2*h*(l+b);
    float door = dl * dh;
    float win = 2 * wl*wh;

    float paint = wall - door - win;
    float roof = l*b;

    printf("Paint: %f\n",paint);
    printf("Whitewash: %2f\n",roof);

    return 0;

}