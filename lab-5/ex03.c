#include <stdio.h>

int main()
{

int mark[5], high = 0, sum;

for (int i = 0; i < 5; i++)
{
    printf("Enter the mark of student %d: ", i + 1);
    scanf("%d", &mark[i]);

}

for (int i = 0; i < 5; i++)
{
    sum += mark[i];
}

for (int i = 0; i < 5; i++)
{
    if (mark[i] > high){

        high = mark[i];
    }
}


printf("Total mark: %d\n", sum);
printf("Highest mark: %d\n", high);
return 0;
}