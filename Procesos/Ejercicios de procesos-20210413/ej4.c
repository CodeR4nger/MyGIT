/*
 * Ejercicio 4  de TP Procesos
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>    // Define pid_t
#include <unistd.h>       // Define fork, getpid y getppid

int main (){

	pid_t pid;
	int i;

	pid = fork();
	switch(pid){
	case 0:
		printf ("Mi pid es %d y soy el hijo\n", getpid());
	break;
	case -1:
		printf ("No se pudo crear el hijo\n");
	break;
	default:
		printf ("Mi pid es %d y soy el padre\n", getpid());
	break;
	}
	// Ejecute pstree en otra consola
	sleep(30);

	exit(0);

}
