/*
Name:
Date:
Description:write a program that calculate the sum of all the elements present in an array
sample I/P:arr{1,2,3,4,5}
sample O/p:sum=15.
*/

#include <stdio.h>

int main()
{
    int size;

    int sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);


    int arr[size];

    printf("Enter the array elemenst: ");
    int i = 0;

    for(i=0; i<size; i++)
    {
	scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {
	sum = sum + arr[i];
    }

    printf("The sum of array elements is: %d\n", sum);

    return 0;
}





