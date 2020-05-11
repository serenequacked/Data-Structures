#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float exponential = 0;
    float x, i,n, j;
    int factorial;


    printf("Enter x:\n");
    scanf("%d", &x);

    for (i=1; i<=x; ++i){
        for (j=1; j<=x; ++j){
        factorial *= j;
        }
    exponential += pow(x,i)/factorial;
    }
    printf("Results = %.2f\n",exponential);

    return 0;
}
