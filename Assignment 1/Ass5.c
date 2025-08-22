/*Accept two numbers and print arithmetic and harmonic mean of the two 
numbers. (Hint: AM=(a+b)/2, HM = ab/(a+b))*/

#include <stdio.h>
int main()
{
    float a, b ;
    float AM, HM;

    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);

    AM = (a+b/2);
    printf("arithmetic number: %f\n", AM);

    HM = a*b/(a+b);
    printf("harmonic number: %f\n", HM);

    return 0;

}