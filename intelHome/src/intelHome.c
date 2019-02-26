/*
 ============================================================================
 Name        : intelHome.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int tempControl(void){
	printf("Temperature is controlled \n");
	fflush(stdout);
	return 0;
}

int presenceControl(void){
	printf("Presence is controlled \n");
	fflush(stdout);
	return 0;
}

int main(void) {

	printf("Control starts \n");
	fflush(stdout);
	while(1){
		presenceControl();
		tempControl();
	}

	return EXIT_SUCCESS;
}
