/* Accept temperatures in Fahrenheit(F) and print it in Celsius(C) and Kelvin (K). 
(Hint: C=5/9(F- 32), K = C + 273.15)  */

#include<stdio.h>
int main()
{
    float Fahrenheit, Celsius, Kelvin;

    printf("Enter temp in Fahrenheit: ");
    scanf("%f", &Fahrenheit);

    Celsius =5/9 *(Fahrenheit - 32);
    printf("Temp into Celsius:%.f\n ", Celsius);

    Kelvin = Celsius + 273.15;
    printf("Temp into Kelvin:%.f\n ", Kelvin);

    return 0;
}