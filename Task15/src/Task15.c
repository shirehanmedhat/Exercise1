/*
 ============================================================================
 Name        : Task15.c
 Author      : Shirehan Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void Concate (char *PtrToLargeString , char *PtrToSmallString);
int main(void) {
	char ArrLarge[40]={0};
	char ArrSmall [20]={0};
	printf("Enter the first word\n");
	fflush(stdout);
	gets(ArrLarge);
	printf("Enter the second word\n");
	fflush(stdout);
	gets(ArrSmall);
	Concate ( ArrLarge ,ArrSmall );
	printf("The system after concatenation is: ");
	puts(ArrLarge);
	return EXIT_SUCCESS;
}
void Concate (char *PtrToLargeString , char *PtrToSmallString)
{
	int i=0 , j ,r=0;
	for ( i=0; PtrToLargeString[i] != 0 ; i++);
	for ( j=i ; PtrToSmallString[r] !=0 ; j++ , r++)
	{
		PtrToLargeString[j]= PtrToSmallString[r];
	}
	PtrToLargeString[j]='\0';



}
