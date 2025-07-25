#include <stdio.h>

int main()
{
    char name[40];
    float ps,ds,phs, average;

    printf("Enter your name : ");
    scanf("%s", name);
    printf("Enter your Programming score : ");
    scanf("%f", &ps);
    printf("Enter your Drawing score : ");
    scanf("%f", &ds);
    printf("Enter your Physics score : ");
    scanf("%f", &phs);

    average = (ps + ds + phs)/3;

    printf("\nName      : %s\n", name);
    printf("AVG score : %3.2f\n", average);
    

    return 0;
}