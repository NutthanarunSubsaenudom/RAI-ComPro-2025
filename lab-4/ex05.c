#include <stdio.h>


int main()
{

int i,num,fac=1;

    printf("Enter a number: ");
    scanf("%d",&num);

    for (i = num;i > 1; i--){
        
        fac *= i;
   
    }

     printf("Factorial of %d is %d\n",num,fac);

    return 0;
}