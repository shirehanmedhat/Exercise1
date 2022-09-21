/*
 ============================================================================
 Name        : Task7.c
 Author      : Shirehan Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
 long long Series (int *terms , int size);
int main(void) {
	int arr[100];
	int num;
	printf("Enter number of terms \n");
	fflush (stdout);
	scanf("%d",&num);
	for (int i=0 , j=1 ;i< num ; i++, j=j+2 )
	{

		arr[i]=j;
		printf("arr[%d]=%d\n",i,arr[i]);

	}
	 long long sum = Series(arr, 100);
	printf("The sum is %llu\n",sum);
}

 long long Series (int *terms , int size)
{
	 long long sum=0;
	for (int i=0 ; i<=size ; i++)
	{
		sum+=terms[i];
	}
	return sum;
}
