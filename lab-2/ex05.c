#include <stdio.h>

int main()

{

    char name[100],uni[100], full[100];
    int age;
    float height;

    printf("Enter your full name: ");
    scanf("%s %s", name, full);

    printf("Enter your Age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your University name: ");
    scanf("%s", uni);




    printf("\nHi! Everyone This is %c.%s from %s. I am %d years old and my height is  %.1f cm tall\n",full[0],name,uni,age,height);


return 0;
}