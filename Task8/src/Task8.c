/*
 ============================================================================
 Name        : Task8.c
 Author      : Shirehan Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int SeriesSquare (int terms);
int main(void) {
	int num;
	printf("Enter number of terms \n");
	fflush (stdout);
	scanf("%d",&num);
	int sum = SeriesSquare (num);
	printf("the sum is %d\n",sum);
}
int SeriesSquare (int terms)
{
	int sum=1;
	for (int i=0 , j=3 ; i<terms ; j=j*3 , i++)
	{
		if (i==0)
		{
			sum=1;
		}
		else
		{
		sum+=j;
		}
	}
	return sum;
}
