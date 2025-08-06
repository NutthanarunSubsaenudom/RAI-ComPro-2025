#include <stdio.h>

int main()
{

char name[100];
int cal, phy, sci, avg;

printf("Enter your name: ");
scanf("%s", name);

printf("Enter your calculus score: ");
scanf("%d", &cal);

printf("Enter your Physic score: ");
scanf("%d", &phy);

printf("Enter your Science score: ");
scanf("%d", &sci);

avg = (cal + phy + sci)/3;

if (avg >= 80)
{
    printf("%s, your average is %d. You got grade A\n", name, avg);
} 
    else if (avg >= 70 && avg < 80)

    {
        printf("%s, your average is %d. You got grade B\n", name, avg);
    }
    else if (avg >= 60 && avg < 70)
    {
        printf("%s, your average is %d. You got grade C\n", name, avg);
    }
    else if (avg >= 50 && avg < 60)
    {
        printf("%s, your average is %d. You got grade D\n", name, avg);
    }
    else if (avg < 50)
    {
        printf("%s, your average is %d. You got grade F", name, avg);
    }

return 0;
}