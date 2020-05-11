#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Practice Question 2. (cylinder) Write a C program that computes the volume and
    surface area of a cylinder. The program reads the user input on the
    radius and height of the cylinder, and then computes the volume and
    surface area of the cylinder.
    The relevant formulas are volume = πr2h and
    surface area= 2πrh + 2πr2 , where r is the radius and h is the height. */

    printf("This is Lab 1 Question 2 \n");

    int radius, height;
    float volume, surfacearea, pi;

    pi = 3.14159265359;

    printf("Enter the radius of the Cylinder: \n");
    scanf("%d",&radius);

    printf("Enter the height of the Cylinder: \n");
    scanf("%d", &height);

    volume = pi*radius*radius*height;
    surfacearea= 2*pi*radius*height + 2*pi*radius*radius;

    printf("The volume is: %.2f \n", volume);
    printf("The surface area is: %.2f \n",surfacearea);

    return 0;
}
