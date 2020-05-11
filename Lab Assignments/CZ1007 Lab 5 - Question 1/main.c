#include <stdio.h>
#include <stdlib.h>
// the method is to append the
//characters in the old string to a new string.

char *sweepSpace1(char *str);
char *sweepSpace2(char *str);

int main()
{
    char str[80];

    printf("Enter the string: \n");
    gets(str);
    printf("sweepSpace1(): %s\n", sweepSpace1(str));
    printf("sweepSpace2(): %s\n", sweepSpace2(str));

    return 0;
}

char *sweepSpace1(char *str)
{
    int i,j,len;

    i=0; len=0;
    //counts the number of characters in the string
    while(str[i]!= 0)
    {
        len++;
        i++;
    }

    j=0;
    for (i=0;i<len;i++)
    {
        if(str[i] != ' ')
        //if this is not a space, add it to the new string
        {
            str[j]=str[i];
            j++;
        }
    }
    str[j] = '\0';
    return str;
}

char *sweepSpace2(char *str)
{
   int i, j, len;

   i=0; len=0;
   while (*(str+i)!='\0'){
      len++;
      i++;
   }
   j = 0;
   for ( i=0; i < len; i++)
   {
      if (*(str+i) != ' ')
      {
         *(str+j) = *(str+i);
         j++;
      }
   }

   *(str+j) = '\0';
   return str;
}
