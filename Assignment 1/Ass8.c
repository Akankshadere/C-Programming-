/*The basic salary of an employee is decided at the time of employment, which 
may be different for different employees. Apart from basic, employee gets 10% 
of basic as house rent, 30% of basic as dearness allowance. A professional tax of 
5% of basic is deducted from salary. Accept the employee id and basic salary for 
an employee and output the take home salary of the employee. */

#include <stdio.h>
int main()
{i
    nt emp_id;
    float basic_salary, hra, da, tax, take_home;

    printf("Enter Employee ID: ");
    scanf("%d", &emp_id);

    printf("Enter Basic Salary: ");
    scanf("%d", &basic_salary);

    hra = 0.10*basic_salary;
    da = 0.30*basic_salary;
    tax = 0.50*basic_salary;

    take_home= basic_salary + hra + da - tax;

    printf("\nEmployee ID: %d\n", emp_id);
    printf("Basic Salary: %.2f\n", basic_salary);
    printf("House Rent Allowance (10%%): %.2f\n", hra);
    printf("Dearness Allowance (30%%): %.2f\n", da);
    printf("Professional Tax (5%%): %.2f\n", tax);
    printf("Take Home Salary: %.2f\n", take_home);

    return 0;

}