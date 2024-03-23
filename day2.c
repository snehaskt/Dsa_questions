/*
Name:
Date:
Description:write a program that takes an integer 'n' as input and prints all the factors of 'n'
sample I/P:12
sample O/p:1,2,3,4,6,12.
*/

#include <stdio.h>

int main()
{
    int n;
    int i=0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The factors are: ");
    for(i=1; i<=n; i++)
    {
	if(n%i == 0)
	{
	    printf("%d ", i);
	}

    }

    printf("\n");

    return 0;
}



