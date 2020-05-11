#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Practice Question 1. (power) Write a C program that reads the user
    input on the current and resistance, and displays the power loss of
    the cable on the screen. The relevant formula is P = I2R, where P is
    the power loss in watts, I is the current in amperes and R is the
    resistance in ohms. */

    printf("This is Lab 1 Practice Question 1\n");

    float current, resistance, powerloss;

    printf("Enter the current: \n");
    scanf("%f", &current);

    printf("Enter the resistance: \n");
    scanf("%f", &resistance);

    powerloss = current*current*resistance;
    printf("The power loss: %.2f \n",powerloss);

    return 0;
}
