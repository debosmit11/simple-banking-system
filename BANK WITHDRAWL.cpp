#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float balance, amount;
    printf ("-----BANK WITHDRAWL-----\n");
	printf ("enter the balance of account: \n");
	scanf ("%f", &balance);
	printf ("enter the amount to be withdrawn: \n");
	scanf ("%f", &amount);
	{
	if (amount<= balance/2 && amount<= 75000)
	printf ("Rs %f has been successfully withdrawn from your account \n",amount);
	else 
	printf ("withdrawl not possible \n");
    }
    return 0;
	}
