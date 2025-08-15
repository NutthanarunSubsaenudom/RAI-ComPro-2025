#include <stdio.h>

int main(){

int num[8], large = 0;

for (int i = 0; i < 8; i++){

    printf("Enter number %d: ", i + 1);
    scanf("%d", &num[i]);

}
int small = num[1];

for (int i = 0; i < 8; i++){

    if (num[i] < small)
    {
        small = num[i];
    }

    if (num[i] > large)
    {
        large = num[i];

    }

}

printf("Smallest number: %d\n", small);
printf("Largest number: %d\n", large);
return 0;
}