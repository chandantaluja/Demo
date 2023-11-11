/*
 ============================================================================
 Name        : DemoProject.c
 Author      : Chandan Taluja
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/* Header File inclusions*/
#include <stdio.h>
#include <stdlib.h>
#include "DemoHeaderFile.h"

#define NUMBER_ONE ((int)10)
#define NUMBER_TWO ((int)20)

/* Main Function*/
int main(void) {
	printf("!!!Hello World!!!\n"); /* prints !!!Hello World!!! */
	printf("This is the demo project\n");
	printf("sum  = %d\n", add (NUMBER_ONE,NUMBER_TWO));
	return 0;
}

/*Sub functions*/
int add (int a , int b)
{
	return a+b;
}
