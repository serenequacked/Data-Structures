#include <stdio.h>
typedef struct {
char source;
char code;
} Rule;

void encodeChar(Rule table[5], char *s, char *t);

int main()
{
    char s[80],t[80];
    Rule table[5] = {'a','d', 'b','z', 'z','a', 'd','b', '\0','\0' };

    printf("Source string: \n");
    gets(s);
    encodeChar(table,s,t);
    printf("Encoded string: %s\n", t);
    return 0;
}
void encodeChar(Rule table[5], char *s, char *t)
{
    //'a'→'d'; 'b'→'z'; 'z'→'a'; and 'd'→'b'
    while(*s != '\0'){
        if (*s == 'a'){
            *s = 'd';
        }else if ()
    }
}
