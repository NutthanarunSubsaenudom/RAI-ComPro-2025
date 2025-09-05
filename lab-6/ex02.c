#include <stdio.h>

int main()
{

struct{

char name[100];

int age;

float score;

}
s[3];

int high = 0;


for (int i = 0;i < 3; i++){

printf("Student %d's name: ",i+1);
scanf("%s",s[i].name);

printf("Student %d's age: ",i+1);
scanf("%d",&s[i].age);

printf("Student %d's score: ",i+1);
scanf("%f",&s[i].score);

printf("\n");
}

for (int j = 0; j < 3;j++){

if (s[j].score > high);
high = j;
}

printf("The highest scores belongs to %s at %.2f scores!\n", s[high].name, s[high].score);




printf("\n");
return 0;
}
