#include <stdio.h>


int main()
{
   // a program to evaluate simple interest by prompting the user to insert principleamount, time,rate
    //p= principal
    //t=time
    //r=rate
    //si=simple intrest

    float p,t,r,si;

     printf( "A calculator to evaluate simple interest!\n");

       printf("Enter the principal:");
       scanf("%f",&p);

       printf("Enter the time (in years):");
       scanf("%f",&t);

       printf("Enter the rate:");
       scanf("%f",&r);

       // simple interest=(p*t*r)/100

         si=(p*t*r)/100;

       printf("Your Simple Interest is:\n %f" ,si);


    return 0;

}
