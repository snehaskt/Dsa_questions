/*
Name:
Date:
Description:write a program to find the higest common factor (HCF) of two numbers.
sample I/P: Numbers: 24,36
sample O/p: 12
*/

#include <stdio.h>
#define smalest(n1, n2) ((n1<n2) ? n1:n2)
int main()
{
    int n1,n2;

    printf("Enter the value of n1: ");
    scanf("%d", &n1);

    printf("Enter the value of n2: ");
    scanf("%d", &n2);

    int i = smalest(n1, n2);

    printf("The higest common factor is: ");
    while(i>0)
    {
	if(n1%i == 0 && n2%i == 0)
	{
	    printf("%d",i);
	    break;
	}

	else
	{
	    i--;
	}

    }

    printf("\n");

    return 0;

}

