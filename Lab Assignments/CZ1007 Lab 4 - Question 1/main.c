#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ar[10];
    int size,i;

    printf("Enter array size:\n");
    scanf("%d", &size);

    printf("Enter %d data:\n", size);


    for(i=0; i <size; i++)
    {
        scanf("%d", &ar[i] );
    }

    for (i = size -1; i>=0; i--){
        printf("%d ", ar[i]);
    }

    return 0;
}

void printReverse2(int ar[], int size)
{
   int i;
   printf("printReverse2(): ");
   if (size > 0) {
      for (i=size-1; i>=0; i--)
         printf("%d ", *(ar+i));
   }
   printf("\n");
}
/* reverseAr reverses the array contents and passes that back to the calling function */
void reverseAr1D(int ar[], int size)
{
   int i, temp;
   if (size > 0) {
      for (i=0; i<size/2; i++){
         temp = ar[i];
         ar[i] = ar[size-i-1];
         ar[size-i-1] = temp;
      }
   }
}
