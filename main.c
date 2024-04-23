#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include "shell.h"
/* */
int main(){
	while(1){  
		char comando[100];/*variable dnde se guardara el comando ingresado X teclado por el usuario, maximo 100 caracteres*/
		printf("shell-done$ ");/* este es el texto a imprimir en pantalla como "PROMP"*/
		scanf(" %99[^\n]", comando);/* esta funcion lee el comando x teclado, un maximo de 99 caracteres (cualquier)*/
		                           /*con la excepcion del caracter nulo "\n" y lo guarda en la variable "comando"*/
		if(!strcmp("exit", comando)){
			break;}
