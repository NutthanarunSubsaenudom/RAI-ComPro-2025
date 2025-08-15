#include <stdio.h>

int main()
{

int num[10];

for (int i = 0;i < 10; i++)
{

    printf("Enter value %d here: ", i+1);
    scanf("%d", &num[i]);
}

printf("Value in Array are: ");

for (int i = 0;i < 10; i++)
{

    printf("%d", num[i]);

    if (i < 9)
    {
        printf(", ");
    }
}


return 0;
}