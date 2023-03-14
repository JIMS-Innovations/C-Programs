/*
* @file: dev_2.c
* @author: Jesutofunmi Kupoluyi
* @brief: This is simple program the uses
* fgets function for getting strings from
* stream.
* @date: 14 March, 2023
*/

/* Including necessary libraries*/
#include <stdio.h>

/* Main function*/
int main(int argc, char **argv)
{
	char buf[64];
	
	/* Using the fgets function*/
	fgets(buf, 64, stdin);

	/* Printing string to screen*/
	puts("You entered : \n");
	puts(buf);

	return 0;
}
