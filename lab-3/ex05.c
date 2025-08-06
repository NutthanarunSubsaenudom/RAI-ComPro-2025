#include <stdio.h>

int main()
{

int height, radius;
float volume;

printf("Enter a cone height: ");
scanf("%d",&height);

printf("Enter cone base radius: ");
scanf("%d", &radius);

volume = (3.14159265358*radius*radius*height)/3;

printf("Cone Volume: %.1f\n", volume);

if (volume > 260)
{
    printf("This cone is perfect for Supun project\n");
}

else{
    printf("This cone is not fit for this project\n");
}
return 0;

}