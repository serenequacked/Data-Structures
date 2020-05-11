#include <stdio.h>
#include <stdlib.h>

int main()
{
    int studentID = 0, marks;

while (studentID != -1){
    printf("Enter Student ID:\n");
    scanf("%d", &studentID);

    if (studentID ==-1){
        break;
    }

    printf("Enter Mark:\n");
    scanf("%d", &marks);

    switch(marks){

    case marks >= 75 : printf("Grade = A\n");
    case marks >= 65 : printf("Grade = B\n");
    case marks >= 55 : printf("Grade = C\n");
    case marks >= 45 : printf("Grade = D\n");
    case marks >= 0 : printf("Grade = F\n");

    }
}
    return 0;
}
