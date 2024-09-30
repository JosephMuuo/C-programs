#include <stdio.h>
#include <stdlib.h>

/* A program to implement the grading system
prompt the user to enter the marks of three subjects of choice
find the average marks
use an if else statement to define the grade

a=average marks
*/
int main()
{
    int average_score,math,eng,kisw,total;
    char grade;

    printf("Enter the score of math:");
    scanf("%d",&math);

    printf("Enter the score of eng:");
    scanf("%d",&eng);

    printf("Enter the score of kisw:");
    scanf("%d",&kisw);
        total=math+eng+kisw;
        average_score = (total)/3;

    if (average_score >= 70) {
        grade = 'A';
    } else if (average_score >= 60) {
        grade = 'B';
    } else if (average_score >= 50) {
        grade = 'C';
    } else if (average_score >= 40) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    printf("The total is: %d\n",total);
    printf("The average score is: %d\n",average_score);
    printf("The grade is:%c\n",grade);

    return 0;

}

