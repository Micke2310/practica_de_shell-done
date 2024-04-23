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

		if(!strcmp("exit", comando)){ /*esto es igual a (strcmp("exit", comando) == 0), pero , como en C 0 es falso,*/
		      break;}		/*y esta funcion,si se cumple que ambas cadenas son iguales, arroja un 0 como "true"*/
					/*entonces invierte el resultado de 0 con "!" y para el verdadero arrojara 0 pero,*/
					/*al invertir la salida sera 1, porque para C 1 es "true". en cambio al igualarlo a 0*/
					/*le decimos a C que para esta funcion, 0 sera el "verdadero" y uno el "falso". */
					/*si strcmp = 0 ,(0 es "true", ambas son iguales), salir del loop con el "break".*/

