#include <stdio.h>

int main()
{

int i = 1, sum=0,num;

while (i <= 10)
{
    printf("%d. Enter a number: ", i);
    scanf("%d", &num);
    i++;
    sum += num;
}

printf("Total sum is %d\n",sum);

return 0;
}