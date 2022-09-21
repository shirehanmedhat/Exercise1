/*
 ============================================================================
 Name        : Task6.c
 Author      : Shirehan Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int occurrenceReversed (int *array , int size , int number);
int main(void) {
	int arr[SIZE] ,search;
	printf("Enter 5 Numbers\n");
	fflush(stdout);
	for(char i =0 ;i<SIZE ; i++)
	{
		scanf("%d",&(*(arr+i)));
	}
	printf("Enter a number to search\n");
	fflush(stdout);
	scanf("%d",&search);
	int BACK = occurrenceReversed(arr , SIZE ,search);
	if (BACK != -1)
	{
		printf("the number is in index %d",BACK);
	}
	else
	{
		printf("The number is not found");
	}
}
int occurrenceReversed (int *array , int size , int number)
{  int FeedBack=-1;
for (char i =(SIZE-1); i>=0 ; i--)
{
	if (number == (*(array+i)))
	{
		FeedBack=i;
		break;
	}
}
return FeedBack;
}
