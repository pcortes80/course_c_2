/*  W2 assignment */

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define BASE_SALARY         1000
#define RANGE               1500
#define SALARY_OVER         rand()% RANGE
/* Salary Generator */
#define SALARY              SALARY_OVER + BASE_SALARY

/* Define the structure for employees */

    struct employee_data {
        enum business_department {HR, Sales, Research, Software, Executive} department_name;
        int annual_salary;
        unsigned int security_num;
    } employee1, employee2;

int main()
{
    employee1.annual_salary = SALARY;
    employee1.security_num = 1;
    employee2.annual_salary = SALARY;
    employee2.security_num = 2;
    printf("Employee 1: Anual Salary = %d, Security Number = %u\n", employee1.annual_salary, employee1.security_num);
    printf("Employee 2: Anual Salary = %d, Security Number = %u\n", employee2.annual_salary, employee2.security_num);
}