#include <stdio.h>
#include <stdlib.h>
#define INIT_VALUE -1000

int findAr1D(int arraysize, int ar[], int target);
int main()
{
    int ar[20];
    int arraysize, i, target, result = INIT_VALUE;

    printf("Enter array size:\n");
    scanf("%d", &arraysize);
    printf("Enter %d data:\n", arraysize);
    if (arraysize > 0){
        for (i=0; i<arraysize; i++){
            scanf("%d", &ar[i]);
        }
    }
    printf("Enter the target number: \n");
    scanf("%d", &target);

    result = findAr1D(arraysize, ar, target);

    if (result == -1)
        printf("findAr1D(): Not found\n");
    else
        printf("findAr1D(): %d", result);

    return 0;
}
int findAr1D(int arraysize, int ar[], int target)
{
    int i;

    for(i=0; i<arraysize; i++){
        if (ar[i] == target){
            return i;
        }
    }
    return -1;
}
