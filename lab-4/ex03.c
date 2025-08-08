#include <stdio.h>

int main()
{

    int i,num,oe;
    do{
        printf("Enter a number: ");
        scanf("%d",&num);
        
        if (num%2 == 0){
            printf("%d is even\n",num);
        }
        else{
            printf("%d is odd\n",num);
        }
        
    } while (num != 0);

    printf("Exiting program ... Bye\n");

  return 0;
}
