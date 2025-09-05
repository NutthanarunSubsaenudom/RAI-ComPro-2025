#include <stdio.h>

int main(){

struct{

    float x;
    float y;

}vector[2];

    printf("u_x: ");
    scanf("%f",&vector[0].x);
    printf("u_y: ");
    scanf("%f",&vector[0].y);
    printf("v_x: ");
    scanf("%f",&vector[1].x);
    printf("v_y: ");
    scanf("%f",&vector[1].y);


printf("Resultant vector is equivalent to %.1fi + %.2fj", vector[0].x + vector[1].x, vector[0].y + vector[1].y);


return 0;
}