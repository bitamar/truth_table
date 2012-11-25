/*
 * main.c
 *
 *  Created on: Nov 25, 2012
 *      Author: itamar
 */

#include "parser.h"

int main(int argc, char* argv[]) {
	int i;

	for (i = 1; i < argc; i++) {
		parser_add_exp(argv[i]);
	}

	return 0;
}
