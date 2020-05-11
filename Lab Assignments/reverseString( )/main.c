#include <stdio.h>
#include <string.h>

void reverseString(char *str);

// a is the "largest alphabet"

int main()
{
   char str[80];

   printf("Enter a string: \n");
   gets(str);

   printf("reverseString(): ");

   reverseString(str);
   puts(str);

   return 0;
}
void reverseString(char *str)
{
    int i,j;
    int len = strlen(str);
    char temp[80];

    j = 1;
    for(i=0; i<len; i++){
        //if the next letter is greater than the first
        if (str[j] > str[i]){
            str[i] = temp[i];
            str[i] = str[j]; //the second letter is assigned to the first letter position
            str[j] = temp[i];
            j++;

            if (str[j] = 0){
                str[j] = str[i];
            }
        }else{
            j++;
            if (str[j] = 0){
                str[j] = str[i];
            }
        }
    }
    str[j] = '\0';
}
