#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1,x2,y1,y2,x,y;
    float distance;

    printf("Enter first point x1 y1:\n");
    scanf("%d %d", &x1, &y1);
    printf("Enter second point x2 y2:\n");
    scanf("%d %d", &x2, &y2);

    x = (x1 - x2);
    y = (y1 - y2);

    distance = sqrt(pow(x,2)+pow(y,2));
    //HAHAHAHHAH THIS ACTUALLY WOKRED
    printf("The distance is %.2f\n", distance);


    return 0;
}
