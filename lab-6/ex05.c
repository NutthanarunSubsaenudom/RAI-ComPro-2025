#include <stdio.h>

int main(){

struct{

    int minute;
    int second;
} time[3];

int total = 0;

for (int i = 0;i < 3;i++){

    printf("Time input (m:s): ");
    scanf("%d:%d",&time[i].minute,&time[i].second);

    
    total += (time[i].minute*60) + time[i].second;


}

printf("Total time elasped: %d second(s)\n",total);

return 0;
}