#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
int main ()
{ 
  int estado;
  pid_t child_pid; //me da un puntero a proceso
 
  child_pid = fork (); //linkea o copia, crea un hijo
  if (child_pid > 0) {
    wait(&estado); //proceso que limpia al zombi y libera
    printf("Soy el proceso padre, mi proceso hijo ha terminado y yo ahora espero 60 segundos antes de terminar\n");
    sleep (60); //espera
  }
  else {
    exit (0);
  }
  return 0;
}