#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int o,age;
	char name[50];
	printf ("----INDIAN DOMESTIC BANK----\n");
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
			else printf ("not eligible for specific account type \n");
		}
			break;
		case 2:
			{
			if (age>=18)
			printf ("you are eligible for salary account \n %s salary account created \n",name);
			else printf ("not eligible for specific account type \n");
		}
			break;
		case 3:
			{
			if (age>=18)
			printf ("you are eligible for recurring account \n %s recurring account created \n",name);
			else printf ("not eligible for specific account type \n");
		}
			break;
		case 4:
			{
			if (age>=55)
			printf ("you are eligible for a pension account \n %s pension account created \n",name);
			else printf ("not eligible for specific account type \n");
		}
			break;
		case 5:
			{
			if (age<=18)
			printf ("you are eligible for a childrens account \n %s childrens account created \n",name);
			else printf ("not eligible for specific account type \n");
		}
			break;
		default:
			printf ("not eligible for specific account type \n");
			break;
	}
	return 0;
}
