#include <stdio.h>

int main()
{

int first, second;

printf("Enter a number: ");
scanf("%d", &first);

printf("Enter a number: ");
scanf("%d", &second);

if (first == second)
{
    printf("Match\n");
}

else{
    printf("Does not match. Try again\n");
}


return 0;
}