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

int temp = 10;

int subir(int nGrados){
	temp++;
	printf("It is rised temperature by %d, to %d \n", nGrados, temp);
	fflush(stdout);

	return 0;
}

int encenderAire(void){
	printf("Air conditioned on \n");
	fflush(stdout);

	return 0;
}

int mostrar(int temp){

	printf("It is %d grades \n", temp);
	fflush(stdout);

	return 0;
}

int tempControl(void){
	printf("Temperature is controlled \n");
	fflush(stdout);
	if(temp < 15) subir(1);
	else if(temp > 28) encenderAire();
	else mostrar(temp);
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
