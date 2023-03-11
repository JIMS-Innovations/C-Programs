/*
* Author: Jesutofunmi Kupoluyi
* Brief: This is a simple program to practicalize 
* my knowlegde on multithreading using the pthread
* library. 
* Date:11 March, 2023 
*
*/


#include <stdio.h>
#include <unistd.h>
#include <pthread.h>


void* func_1( void* arg)
{
	while(1){
	sleep(1);
	printf("Function 1 running!\n");
	}
return NULL;
}

void func_2()
{
	while(1){
	sleep(2);
	printf("Function 2 running!\n");
	}
}


int main()
{
	pthread_t thread_1;
	pthread_create(&thread_1, NULL, func_1, NULL);
	
	func_2();
	
	pthread_join(&func_1, NULL);	
}
