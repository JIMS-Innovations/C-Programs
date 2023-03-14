/*
* @file: linked_list.c
* @author: Jesutofunmi Kupoluyi
* @brief: This is a simple program to practice linked lists.
* @date: 13 March, 2023
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node* next;
};

typedef struct node node_t;

void printlist(node_t *head) {
	node_t *temporary = head;

	while (temporary != NULL) {
		printf("%d - ", temporary->value);
		temporary = temporary->next;
	}
	printf("\n");
}

node_t *create_new_node(int value) {
	node_t *result = malloc(sizeof(node_t));
	result->value = value;
	result->next = NULL;
	return result;
}


int main(int argc, char *argv[])
{
	node_t *tmp;
	node_t *head;

	tmp = create_new_node(32);
	head = tmp;
	tmp = create_new_node(8);
	tmp->next = head;
	head = tmp;
	tmp = create_new_node(34);
	tmp->next = head;
	head = tmp;

	/* Printing linked list*/
	printlist(head);	

	return 0;
}

