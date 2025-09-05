#include <stdio.h>
#include <math.h>

int main(){

struct {

    float x;
    float y;

}
cord[2];

for (int i = 0;i < 2;i++)
{
    printf("x%d: ",i+1);
    scanf("%f",&cord[i].x);
}

for (int j = 0;j < 2;j++)
{
    printf("y%d: ",j+1);
    scanf("%f",&cord[j].y);
}

float dx = cord[1].x - cord[0].x;
float dy = cord[1].y - cord[0].y;

float A = sqrt(dx*dx)+(dy*dy);

//float distance = sqrt((dx*dx)+(dy*dy));

printf("The distance between (%.1f,%.1f) and (%.1f,%.1f) is %.2f unit(s)\n", cord[0].x, cord[0].y, cord[1].x, cord[1].y,A);


return 0;
}