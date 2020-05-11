#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Lab 1 Question 2: Solving simultaneous equations

    printf("This is Lab 1 Question 2 \n");

    int a1,a2,b1,b2,c1,c2;
    float x,y;

    printf("Enter a value for a1,b1,c1,a2,b2,c2 \n");
    scanf("%d %d %d %d %d %d", &a1, &b1, &c1, &a2, &b2, &c2);

    x = (b2*c1 - b1*c2)/(a1*b2 - a2*b1);
    y = (a1*c2 - a2*c1)/(a1*b2 - a2*b1);

    printf("The value of x = %.2f and y = %.2f \n", x, y);
    return 0;
}
