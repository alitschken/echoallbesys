/*
 * main.c
 *
 *  Created on: 07.04.2017
 *      Author: aw
 */

#include <stdio.h>
#include <unistd.h>


int main(int argc, char* argv[]) {

	printf("kommandozeile\n");
	int i;
	char* text;

	for (i = 0; i < argc; i++) {
	text = argv[i];
		printf(text);
		printf("\n");
	}
	exit(0);
	return 0;
}

