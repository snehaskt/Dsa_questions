/*
Name:
Date:
Description:write a program that prints all the pairs in an array.
sample I/P: array{1,2,3,4,5}
sample O/p: pair(1,2),(1,3)..(1,5),(2,3)..(2,5),(3,4)..(3,5),(4,5).
*/

#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of an array: ");
    scanf("%d", &size);

    int i=0, j=0;
    int arr[size];
    printf("Enter the array elements: ");

    for(i=0; i<size; i++)
    {
	scanf("%d", &arr[i]);
    }

    printf("Pair of the array elements are: ");

    for(i=0; i<size; i++)
    {
	for(j=i+1; j<size; j++)
	{
	    printf("(%d,%d) ", arr[i],arr[j]);
	}

    }

    printf("\n");

    return 0;
}

