#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float principal, rate, year, si, ci, balance, amount;
	int n;
	printf ("----INDIAN DOMESTIC BANK----\n");
	printf ("-----LOAN SYSTEM-----\n");
	printf ("enter the amount of principal: \n");
	scanf ("%f", &principal);
	printf ("enter the no of years to be taken: \n");
	scanf("%f", &year);
	{
	if (0<=principal && principal<=20000)
	rate =7;
	else if (20001<=principal && principal<=50000)
	rate =9;
	else if (50001<=principal && principal<=100000)
	rate =12;
	else if (100001<=principal && principal<=150000)
	rate =15;
	else 
	printf ("amount currently not avaliable \n");
	printf ("the rate of intrest is: %f \n",rate);
    }
    printf ("enter the operation \n 1.simple intrest = 1 \n 2.compound intrest = 2 \n");
    scanf ("%d", &n);
    switch (n)
    {
    	case 1:
    		si = (principal * year * rate)/100;
    		printf ("the simple intrest for the amount will be: %f \n",si);
    		break;
    	case 2:
    		ci = principal * ((pow((1 + rate / 100),year)));
    		printf ("the compound intrest for the amount will be: %f \n",ci);
    		break;
    	default:
    		printf ("operation error");
    		break;
	}
	return 0;
}
