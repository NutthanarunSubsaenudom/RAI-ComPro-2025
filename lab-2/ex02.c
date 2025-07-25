#include <stdio.h>

int main()

{

    int tot,hour,min;

    printf("Enter total minutes: ");
    scanf("%d", &tot);

    hour = tot/60;
    min = tot - 60;
    
    printf(" %d minutes is %d hour(s) and %d minute(s)\n", tot,hour,min);






return 0;
}