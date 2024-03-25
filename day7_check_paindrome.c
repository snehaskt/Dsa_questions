/*
Name:
Date:
Description:write a program that takes an integer 'n' as input and check if it is a palindrom number.
sample I/P:12321
sample O/p:plaindrom
*/


#include <stdio.h>

int main()
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int t = n;

    int revrse=0;

    int remainder;

    while(n > 0)
    {
	remainder = n%10;
	revrse = revrse * 10 + remainder;
	n = n/10;

    }

    if(revrse == t)
    {
	printf("The given integer is a palindrom\n");

    }

    else
    {
	printf("Not a palindrom\n");
    }

    return 0;
}



