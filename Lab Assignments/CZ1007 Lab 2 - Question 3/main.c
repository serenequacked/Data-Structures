#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    printf("This is a program that prints a pyramid of stars\n");
    int i,j,rows;
    printf("Enter the number of rows: \n");
    scanf("%d", &rows);

    for(i=1; i<=rows; ++i){ //creates the rows
        printf("\n");
        for (j=1; j<=i; ++j){ //prints the starts
        printf("* ");
        }
    }

    printf("This program prints a pyramid of numbers\n");

    int rowsprinted;
    int row;
    int numberprinted;

    printf("Enter the number of rows:\n");
    scanf("%d",&row);
    //row is constant that is defined by the user

    for (rowsprinted=1; rowsprinted <= row; rowsprinted++){
            for (numberprinted = 1; numberprinted<=rowsprinted; numberprinted++){
                if (numberprinted%3 ==0){
                    printf("3 ");
                }else if(numberprinted%3 ==1){
                    printf("1 ");
                }else{
                    printf("2 ");
                    }
            }
        printf("\n");
    }

    for (rowsprinted=1; rowsprinted<= row; rowsprinted++){
        if (rowsprinted%3 ==1){
            printf("1 ");
        }else if(rowsprinted%3 ==2){
            printf("2 ");
        }else{
            printf("3 ");
        }
        for (numberprinted = 1; numberprinted<=rowsprinted; numberprinted++){
            printf("\n");
        }
    }
*/

    int i,j;
    char input, number = '1';

    printf("Enter the number of rows\n");
    scanf("%c", &input);

    for (i=1; i<=(input - '1' +1); ++i){
        for(j=1;j<=i;++j)
        {
            printf("%c ",number);
        }
        ++number;
        printf("\n");
    }







    return 0;
}
