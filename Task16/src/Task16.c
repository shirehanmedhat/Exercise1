/*
 ============================================================================
 Name        : Task16.c
 Author      : Shirehan Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
void ReverseArray (int *PtrToArray , int ArraySize);
int main(void) {
	int arr[SIZE];
	printf("Enter 5 array elements\n");
	fflush(stdout);
	for (int i=0; i<SIZE; i++)
	{
		scanf("%d",&arr[i]);
	}

	ReverseArray(arr,5);
	printf("The Array After Reverse :\n");
	fflush(stdout);
	for (int i =0 ;i<SIZE; i++)
	{
		printf ("array[%d] = %d\n",i , arr[i]);
	}
	return EXIT_SUCCESS;

}
void ReverseArray (int *PtrToArray , int ArraySize)
{
	int TempArray[ArraySize];
	for (int i=0 ; i<=ArraySize ; i++)
	{
		TempArray[ArraySize-1-i]= PtrToArray[i];
	}
	for (int i=0; i<ArraySize ; i++)
	{
		PtrToArray[i]= TempArray[i];
	}
}
