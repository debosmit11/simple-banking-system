#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float principal, rate, year, si, ci, balance, amount;
	int n,m,o,age;
	char name[50];
	printf ("----INDIAN DOMESTIC BANK----\n");
	printf ("ENTER THE OPERATION TO BE PERFORMED: \n 1.CREATE ACCOUNT = 1 \n 2.LOAN SYSTEM = 2 \n 3.CASH WITHDRAWL = 3 \n");
	scanf ("%d",&m);
	switch (m)
	{
	case 1:
	printf ("----CREATE ACCOUNT----\n");
	printf ("enter the name of account holder: \n");
	scanf ("%s",&name);
	printf ("enter the age of account holder: \n");
	scanf ("%d", &age);
	printf ("choose the type of account: \n 1.Savings account = 1 \n 2.salary account = 2 \n 3.recurring account = 3 \n 4.pension account = 4 \n 5.childrens account = 5 \n");
	scanf ("%d", &o);
	switch(o)
	{
		case 1:
			{
			if (age>=18)
			printf ("you are eligible for a savings account \n %s savings account created \n",name);
		}
			break;
		case 2:
			{
			if (age>=18)
			printf ("you are eligible for salary account \n %s salary account created \n",name);
		}
			break;
		case 3:
			{
			if (age>=18)
			printf ("you are eligible for recurring account \n %s recurring account created \n",name);
		}
			break;
		case 4:
			{
			if (age>=55)
			printf ("you are eligible for a pension account \n %s pension account created \n",name);
		}
			break;
		case 5:
			{
			if (age<=18)
			printf ("you are eligible for a childrens account \n %s childrens account created \n",name);
		}
			break;
		default:
			printf ("not eligible for specific account type \n");
			break;
	}
	break;
	
	case 2:
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
	break;
	
	case 3:
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
    break;
	
	default:
	printf ("error occured \n");
    break;
	}
   return 0;
} 
