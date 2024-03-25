/*
Name:
Date:
Description:write a program that takes two integer, 'n1' and 'n2' as input and prints the common factor of n1 and n2.
sample I/P: n1 = 12, n2 = 18
sample O/p:1,2,3,6
 */


#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Enter the value of n1: ");
    scanf("%d", &n1);

    printf("Enter the value of n2: ");
    scanf("%d", &n2);

    printf("The common factors are: ");


    int i = 1;
    while(i <= n1)
    {
	if(n1%i == 0 && n2%i == 0)
	{
	    printf("%d ", i);
	}

	i++;


    }

    printf("\n");

    return 0;
}


