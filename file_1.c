/*
* File: file_1.c
* Author: Jesutofunmi Kupoluyi
* Brief: This is a simple program for practicing 
* files I/O in c.
* Date: 12 March, 2023
*/

/* Including necessary libraries */
#include <stdio.h>


int main()
{

	/* File pointer variable*/
	FILE *fp;

	/* Creating and opening file*/
	fp = fopen("text.txt", "w");

	/* Writing to file*/
	fprintf(fp, "Hello Jesutofunmi\nThis is the file you created!\n");

	/* Closing the file*/
	int file_status = fclose(fp);

	/* Checking file status*/
	!file_status ? printf("File closed successfully\n") : printf("File close failed\n");


	return 0;
}
