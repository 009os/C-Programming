#include <stdio.h>

float add(float num1, float num2);
float sub(float num1, float num2);
float divs(float num1, float num2);
float mult(float num1, float num2);
float power(float num1, float num2);

int main()
{
    float num1, num2, add1, sub1, divs1, mult1, power1;
    int n, i;
    
    do
    {
    printf("PLEASE ENTER TWO NUMBERS : \n");
    scanf("%f %f", &num1, &num2);

    printf("\nWHAT OPERATION YOU WANT TO PERFORM ?\n(+ - / *) ? ");
    printf("\nENTER\n1. FOR ADDITION\n2. FOR SUBSTRACTION\n3.FOR MULTIPLICATION\n4. FOR DIVISION\n5. FOR EXPONENT\n\n");
    scanf("%d", &n);
 

        switch (n)
        {
        case 1:
        {
            add1 = add(num1, num2);
            printf("THE ADDITION IS : %f", add1);
            break;
        }

        case 2:
        {
            sub1 = sub(num1, num2);
            printf("THE SUBSTRACTION IS : %f", sub1);
            break;
        }

        case 3:
        {
            mult1 = mult(num1, num2);
            printf("THE MULTIPLICATION IS : %f", mult1);
            break;
        }

        case 4:
        {
            if (num2 != 0)
            {
                divs1 = divs(num1, num2);
                printf("THE DIVISION IS : %f", divs1);
            }

            else
                printf("NOT DEFINED !");

            break;
        }

        case 5:
        {
            power1 = power(num1, num2);
            printf("THE EXPONENT IS : %f", power1);
            break;
        }

        default:
        {
            printf("YOU ENTERED A WRONG CHOICE ");
            break;
        }
        }

        printf("\nDO YOU STILL WANT TO CONTINUE : ENTER 1 FOR YES and 2 FOR NO : ");
        scanf("%d",&n);

        if (n == 2)
            break;
    }
        while (n == 1);

    return 0;
}

float add(float num1, float num2)
{
    return num1 + num2;
}

float sub(float num1, float num2)
{

    return num1 - num2;
}
float mult(float num1, float num2)
{
    return (num1 * num2);
}

float divs(float num1, float num2)
{

    return (num1 / num2);
}

float power(float num1, float num2)
{
    int j,powe=1;
    
    for(j=1;j<=num2;j++)
    {
        powe=powe*num1;
    }
    return powe;
    
}