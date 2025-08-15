#include <stdio.h>

int main()
{

int a, count = 0;

printf("Enter number of element: ");
scanf("%d", &a);

int num[a], key[a];

printf("Enter %d integers: ", a);
for (int i = 0; i < a; i++){
    scanf("%d", &num[i]);
    key[i] = 0;
}


for (int i = 0; i < a; i++){
    if (key[i] == 0){
        count = 1;
        for (int j = i + 1; j < a; j++){
            if (num[i] == num[j]){
                count ++;
                key[j] = 1;
            }
        }
        printf("Element %d occurs %d times\n", num[i], count);
    }
}
return 0;
}