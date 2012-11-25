/*
 * list.h
 *
 *  Created on: Nov 25, 2012
 *      Author: itamar
 */

#ifndef LIST_H_
#define LIST_H_

typedef struct _Node {
	struct _Node* next;
	char* value;
} Node;

void list_append(Node* head, char* value);

void list_print(Node* head);

#endif /* LIST_H_ */
