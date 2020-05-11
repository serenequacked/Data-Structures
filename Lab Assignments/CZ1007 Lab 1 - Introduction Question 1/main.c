#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Lab 1 Question 1 (temperature) Write a C program that reads the user input on
    temperature in degrees Fahrenheit,and then converts the temperature
    from degrees Fahrenheit into degrees Celsius. The relevant
    formula is given as follows: Celsius = (5/9)*(Fahrenheit – 32).
    return 0; */

    float ftemp,ctemp;
    printf("Enter the temperature in degree F: \n");
    scanf("%f",&ftemp); //& must be used

    ctemp=(5.0/9.0)*(ftemp-32.0); //the decimal points is extremely important

    printf("Converted degree in C: %.2f\n", ctemp);

    return 0;

}
