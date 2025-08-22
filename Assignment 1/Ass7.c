/*
7.Accept two integers from the user and interchange them. Display the 
interchanged numbers. Using temporary variable Without using temporary 
variable 
a. Using + and – operator 
b. Using / and * operator */

#include <stdio.h>
int main()
{
    int num1, num2, temp;

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Before swapping: num1 = %d, nume2 = %d\n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;

}