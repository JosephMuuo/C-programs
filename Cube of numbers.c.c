#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number=0;
    int cube;
    int total=0;
    printf("Enter a number: ");
    scanf("%d",&number);
    cube =number*number*number;
    while(number<=5){
        printf("The number is %d cube of %d is:%d\n",number,number,cube);
        number++;
        cube =number*number*number;
    }


    return 0;
}
