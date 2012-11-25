/*
 * parser.c
 *
 *  Created on: Nov 25, 2012
 *      Author: itamar
 */

#include "parser.h"

Node* head;

void parser_add_exp(char* exp) {
	list_append(head, exp);
	list_print(head);
}
