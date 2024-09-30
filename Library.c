#include <stdio.h>
#include <stdlib.h>
/*A program to calculate the fine overdue for library books
library charges fine based on number of days the book is overdue

upto 7days- 20/=
8-14 50/=
15 days or more=100

a program that takes bookID,dueDate and returnDate
Calculate the days overdue=returndate-duedate
if statement to determine the fine rate
    to display bookid,duedate,returndate,daysoverdue,finerate,fineamount

*/

int main(){

    int dueDate,returnDate,daysoverDue,finerate,fineAmount;
    int book_id=0;

    printf("Enter the bookId: ");
    scanf("%d",&book_id);
    printf("Enter the dueDate:");
    scanf("%d",&dueDate);
    printf("Enter the returnDate:");
    scanf("%d",&returnDate);

    daysoverDue=returnDate-dueDate;


    if(daysoverDue<=7){
        finerate=20;
    }else if(daysoverDue<=14){
        finerate=50;
    }else{
        finerate=100;
    }
     fineAmount=daysoverDue*finerate;
    printf("The days overdue is: %d\n",daysoverDue);
    printf("The fine rate is:%d\n",finerate);
    printf("The fineAmount is:%d\n",fineAmount);
return 0;
}




