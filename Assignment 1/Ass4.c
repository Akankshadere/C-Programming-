/*Accept initial velocity (u), acceleration (a) and time (t). Print the final velocity 
(v) and the distance (s) travelled. (Hint: v = u + at, s = u + at2) */

#include <stdio.h>
int main()
{
    float u, a, t, v, s;

     printf("Enter velocity(u): ");
     scanf("%f", &u);

     printf("Enter acceleration(a): ");
     scanf("%f", &a);

     printf("Enter time(t): ");
     scanf("%f", &t);

     v = u + a*t;
     printf("velocity(v):%f\n ", v );

     s = u + a*t*t;
     printf("distance(s): %f\n", s);

     return 0;
}