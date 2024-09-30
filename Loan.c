#include <stdio.h>
#include <stdlib.h>
/* A program to give out loan to  people by checking whether there age is above 18 and salary is above 20,000
if yes ,it gives out the salary. If one of the condition is not attained ,the salary is not given.
*/
int main()
{
  int age,salary;
    printf("Clients age:");
    scanf("%d",&age);

    printf("Clients salary:");
    scanf("%d",&salary);
  if(age>=18 & salary>=20000){
    printf("Client qualifies for loan!!");
  }
  else{
    printf("Client does not qualify for loan!!");
  }
  return 0;
}
