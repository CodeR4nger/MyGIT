/*
 * Ejercicio 7 de TP Procesos
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>    // Define pid_t
#include <unistd.h>       // Define fork, getpid y getppid

int main (){

	pid_t pid;
	int i;
	for(i=0;i<3;i++){
		pid = fork();
		printf ("Mi pid es %d y el pid de papa es %d. fork() devolvio %d, X= %d\n", getpid(), getppid(), pid, i);
	}
	// Ejecute pstree en otra consola
	sleep(30);

	exit(0);

}
