/*
Name:
Date:
Description:write a program that takes an integer 'n' as input and perfoms the following action.
if n is the multiple of 3, print 'TAP'
if n is the multiple of 5, print 'ACAD'
if n is the multiple of both 3 and 5, print 'FULLSTACK'
sample I/P:3
sample O/p:TAP
*/

#include <stdio.h>

int  main()
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if(n%3==0 && n%5==0)
    {
	printf("FULLSTACK\n");
    }

    else if(n%3 == 0)
    {
	printf("TAP\n");
    }

    else if(n%5 == 0)
    {
	printf("ACAD\n");
    }

    return 0;
}


