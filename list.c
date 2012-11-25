/*
 * list.c
 *
 *  Created on: Nov 25, 2012
 *      Author: itamar
 */

#include "list.h"
#include <stdio.h>
#include <stdlib.h>

// Append a new node to the end of a list.
void list_append(Node* head, char* value) {
	Node *new, *p;

	new = (Node*)malloc(sizeof(Node));
	new->value = value;
	if (!head) {
		head = new;
		return;
	}

	p = head;
	// Push p to the tail.
	while (p->next)
		p = p->next;

	p->next = new;
}

// Print a list.
void list_print(Node* head) {
	Node* p = head;

	do {
		printf("%s\n", p->value);
	} while (p->next);
}
