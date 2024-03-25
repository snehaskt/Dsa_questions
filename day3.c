/*
Name:
Date:
Description:write a program that takes an integer 'n' as input and checks wheter it is prime number or not.
sample I/P:7
sample O/p:prime
*/

#include <stdio.h>

int main()
{
    int n;
    int i=0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int count=0;

    for(i=2; i<=n; i++)
    {
	if(n%i == 0)
	{
	    count++;
	}

    }
    if(count > 2)
    {
	printf("Not a prime\n");
    }

    else
    {
	printf("Prime\n");
    }

    return 0;

}


