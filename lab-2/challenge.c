#include <stdio.h>

int main()
{


    int first,second,third,min,max,sum;
    float avg;

    printf("Enter integer #1: ");
    scanf("%d",&first);

    printf("Enter integer #2: ");
    scanf("%d",&second);

    printf("Enter integer #3: ");
    scanf("%d",&third);


//max

    if(first > second && first > third)
    {
    max = first;
    }

    if(second > first && second > third)
    {
    max = second;
    }

    if(third > first && third > second)
    {
    max = third;
    }

//min

    if(first < second && first < third)
    {
    min = first;
    }

    if(second < first && second < third)
    {
    min = second;
    }

    if(third < first && third < second)
    {
    min = third;
    }

    sum = first + second + third;
    avg = sum/3.0;




    printf("Results:\n Minimum: %d\n Maximum: %d\n Sum: %d\n Average %.2f\n", min, max, sum, avg);


return 0;
}