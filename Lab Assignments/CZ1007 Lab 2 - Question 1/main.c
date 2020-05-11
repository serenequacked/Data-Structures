#include <stdio.h>
#include <stdlib.h>

int main()
{
    int studentID, marks;

    studentID = 0;

    while (studentID != -1){
        printf("Enter Student ID:\n");
        scanf("%d", &studentID);
        if (studentID == -1 ){
        break;
        }

        printf("Enter Mark:\n");
        scanf("%d", &marks);

        if (marks >= 75){
            printf("Grade = A\n");
        }else if (marks >= 65){
            printf("Grade = B\n");
        }else if (marks >= 55){
            printf("Grade = C\n");
        }else if (marks >= 55){
            printf("Grade = D\n");
        }else{
            printf("Grade = F\n");
        }

    }



    return 0;
}
