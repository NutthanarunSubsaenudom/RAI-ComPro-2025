#include <stdio.h>

int main()

{
    

    char st[40];
    int num;
    float flo;

    printf("Please enter an integer value: ");
    scanf("%d", &num);
    printf("You entered %d\n", num);

    printf("Please enter an float value : ");
    scanf("%f", &flo);
    printf("You entered %.1f\n", flo);

    printf("Please enter a Character : ");
    scanf("%s", st);
    printf("You entered %s\n", st);

return 0;
}