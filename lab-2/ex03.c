#include <stdio.h>

int main()

{

char name[100],eq[100],eq2[100],gender[100];
int age,weight;
float height;

printf("Enter your name: ");
scanf("%s", name);
printf("Enter your Age: ");
scanf("%d", &age);
printf("Enter your height: ");
scanf("%f", &height);
printf("Enter your weight: ");
scanf("%d", &weight);
printf("Enter your gender: ");
scanf("%s", gender);
printf("Enter your Education qualification: ");
scanf("%s %s", eq, eq2);

printf("\nName: %s\n", name);
printf("Age: %d\n", age);
printf("Gender: %s\n", gender);
printf("Height: %.1f\n", height);
printf("Weight: %d\n", weight);
printf("Education: %s %s\n", eq,eq2);

return 0;
}