/*
 ============================================================================
 Name        : Task2.c
 Author      : Shirehan Medhat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int Check (char *character );
#define TRUE 1
#define FALSE 0
int main(void) {
	char sent[10];
	puts("Enter the word\n"); /* prints !!!Hello World!!! */
	fflush(stdout);
	gets(sent);
	int feedback = Check (sent);
	printf("the feedback is %d\n",feedback);
	return EXIT_SUCCESS;
}
int Check (char *character )
{ int i , j;
	int feed;
	for ( i =0; character[i]!='\0' ; i++)
	{
		for ( j=i+1 ; character[j]!='\0' ; j++)
		{
			if (character[i] != character[j])
			{
				feed= TRUE;
			}
			else
			{
				feed = FALSE;
				break;
			}
		}
		if (feed == FALSE)
		{
			break;

		}
	}
	return feed;
}
