#include <stdio.h>

struct bank
{
    char name[50];
    int customerid;
    float balance[20];
};

int main()
{
    int i, j, n, cid, user, num;
    float deposit, withdrwal;
    printf("ENTER THE NUMBER OF CUSTOMERS : ");
    scanf("%d", &n);
    struct bank c[n];
    for (i = 0; i < n; i++)
    {
        printf("\nEnter Name : ");
        scanf("%s", c[i].name);
        printf("Enter CUSTOMER ID : ");
        scanf("%d", &c[i].customerid);
        printf("Enter balance: ");
        scanf("%f", c[i].balance);
    }
    for (j = 0; j < 4; j++)
    {
        printf("\nENTER THE CUSTOMER ID for details: ");
        scanf("%d", &cid);

        for (i = 0; i < n; i++)
        {
            do
            {
                if (c[i].customerid == cid)
                {

                    printf("\nHELLO YOU ARE DEALING with: %s", c[i].name);
                    printf("\nSO, what you want to do.\n PRINT 1 for withdrwal 2 for deposit and 3 for balance :\n");
                    scanf("%d", &user);
                    if (user == 3)
                        printf("%f", *c[i].balance);

                    else if (user == 2)
                    {
                        printf("How much money you want to deposit :");
                        scanf("%f", &deposit);
                        printf("SO your final balance is : %f", (deposit + *(c[i].balance)));
                    }

                    else if (user == 1)
                    {
                        printf("How much money you want to withdrwal : ");
                        scanf("%f", &withdrwal);
                        if(withdrwal<*(c[i].balance))
                        printf("SO your final balance is : %f", (*(c[i].balance) - withdrwal));

                        else
                        printf("insufficient balance");
                    }

                    printf("\nIF YOU WANT TO CONTINUE WITH SAME USER ENTER 1 ELSE 2 : ");
                    scanf("%d", &num);
                }
                if (num == 2)
                    break;
            } while (num == 1);
        }
    }
}
