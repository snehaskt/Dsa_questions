/*
Name:
Date:
Description: write a program that takes two integer n1, and n2 as input and prints the first y common multiple of n1 and n2.
sample I/P:n1 = 3 and n2 = 5, y=4.
sample O/p:15,30,45,60.
 */

#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter the value of n1: ");
    scanf("%d", &n1);

    printf("Enter the value of n2: ");
    scanf("%d", &n2);

    int y=4;
    int i = (n1 > n2) ? n1: n2;
    int j = 0;

    printf("First %d common multiple is: ", y);

    while(j < y)
    {
	if(i%n1 == 0  && i%n2 == 0)
	{
	    printf("%d ", i);
	    j++;
	}

	i++;


    }

    printf("\n");

    return 0;
}




