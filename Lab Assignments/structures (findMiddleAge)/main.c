
#include <stdio.h>
typedef struct {
char name[20];
int age;
} Person;
void readData(Person *p);
Person findMiddleAge(Person *p);

int main()
{
    Person man[3], middle;
    readData(man);
    middle = findMiddleAge(man);
    printf("findMiddleAge(): %s %d\n", middle.name, middle.age);

    return 0;
}
void readData(Person *p)
{

}

Person findMiddleAge(Person *p)
{
    /* Write your program code here */

}
