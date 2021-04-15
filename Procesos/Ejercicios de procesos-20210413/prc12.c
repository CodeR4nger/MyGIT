/*
 * Ejercicio 12
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>    // Define pid_t
#include <unistd.h>       // Define fork, getpid y getppid

int main (){
	
	fprintf (stdout,"Texto stdout\n");
	fprintf (stderr,"Texto stderr\n");

	exit(0);   
	}
