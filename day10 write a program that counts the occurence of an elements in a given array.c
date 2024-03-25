/*
Name:
Date:
Description:write a program that counts the occurence of an element in an array.
sample I/P: array{1,2,3,2,2,4,5}
	    Element to count: 2
sample O/p: occurence:3
*/

#include <stdio.h>
int find_count(int *arr, int size, int element);


int main()
{
    int size;
    printf("Enter the size of an array: ");
    scanf("%d", &size);

    int arr[size];
    int i=0;
    printf("Enter the array elements: ");

    for(i=0; i<size; i++)
    {
	scanf("%d", &arr[i]);
    }

    printf("The array elements are: ");
    for(i=0; i<size; i++)
    {
	printf("%d ", arr[i]);
    }

    printf("\n");
    int element;
    printf("Enter the array element to get count: ");
    scanf("%d", &element);

    int ret = find_count(arr,size,element);

    printf("The count of the element is:%d\n", ret);

    return 0;
}

int find_count(int *arr, int size, int element)
{
    int i=0;

    int count = 0;
    for(i=0; i<size; i++)
    {
	if(arr[i] == element)
	{
	    count++;
	}

    }

    return count;
}

