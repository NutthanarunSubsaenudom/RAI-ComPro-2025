#include <stdio.h>

int main()
    {

int opt,bal=0,dep,wit;

    do{

        printf("===== ATM MENU =====\n");
        printf("1. Check balance\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Exit\n");

        printf("Choose an option: ");
        scanf("%d",&opt);
        
        if (opt == 1){

            printf("Current balance = %d\n\n",bal);

        }
        else if (opt == 2){

            printf("Enter amount to Deposit: ");
            scanf("%d",&dep);

            bal += dep;
        }

        else if (opt == 3){

            printf("Enter amount to withdraw: ");
            scanf("%d",&wit);

            bal -= wit;

            printf("Withdraw successful.\n\n");
        }

        else {
            printf("Thank you for using the ATM.\n");
        }

    } while (opt != 4);







    return 0;
}
