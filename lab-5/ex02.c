#include <stdio.h>

int main()
{

int ori[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, rev[8];
int j = 0;

for (int i = 8; i >= 0; i--)
{
    rev[j] = ori[i];
    
    j++;

}

    printf("Reversed Array: ");

    for (int j = 0; j < 9; j++)
    {
        printf("%d", rev[j]);

        if (j < 8)
        {
            printf(", ");
        }
    }

printf("\n");

return 0;
}
