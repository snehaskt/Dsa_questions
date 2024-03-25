/*
Name:
Date:
Description:Write a program that prints the largest repeating element in a array.
sample I/P: array{7,7,2,3,5,6,8,9,4,4,4}
sample O/p: 4
*/

#include <stdio.h>
#include <stdlib.h>

int sort_array(int *arr, int size);
int find_largest(int *arr, int size, int *element, int *maxcount);
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int i=0;

    int *arr = malloc(sizeof(int) * size);

    if(arr == NULL)
    {
	printf("Memeory allocation failed\n");

	return 1;
    }

    int element;
    int maxcount = 0;

    printf("Enter the array elements: ");

    for(i=0; i<size; i++)
    {
	scanf("%d", &arr[i]);
    }


    element = arr[0];
    sort_array(arr,size);

    for(int i=0; i<size; i++)
    {
	printf("%d ", arr[i]);
    }

    printf("\n");

    find_largest(arr, size, &element, &maxcount);

    printf("The max repeated element in array is %d\n", element);

    return 0;
}

int find_largest(int *arr, int size, int *element, int *maxcount)
{
    int i=0;
    int count=0;

    for(i=0; i<size; i++)
    {
	if(arr[i] == arr[i+1])
	{
	    count++;
	}

	if(count > *maxcount)
	{
	    *maxcount = count;
	    *element = arr[i];
	}

    }

    return (*element);
}

int sort_array(int *arr, int size)
{
    int i=0, j=0;

    for(i=0; i<size; i++)
    {
	for(j=0; j<size-1; j++)
	{
	    if(arr[j] > arr[j+1])
	    {
	    int temp = arr[j];
	    arr[j] = arr[j+1];
	    arr[j+1] = temp;
	    }

	}

    }

}








