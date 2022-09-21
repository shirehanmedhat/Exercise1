/*
 ============================================================================
 Name        : Task1.c
 Author      : Shirehan Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define size 5
int summation(int numbers_size, int* numbers);
int main(void) {
	int arr[5];
	printf("Enter 5 numbers\n");
	fflush(stdout);

	for(char i =0; i<size;i++)
	{
		scanf("%d",& *(arr+i));
	}

	int sum = summation(size,arr);
	printf("the sum is %d",sum);
}
int summation(int numbers_size, int* numbers)
{
	long int sum=0;

	for (int i =0;i<numbers_size ; i++)
	{
		//sum+= numbers[i];
		 sum+= *(numbers+i);
	}
	return sum;
}
