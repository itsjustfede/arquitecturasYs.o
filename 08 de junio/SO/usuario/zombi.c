#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


 
int main ()
{
  pid_t child_pid;
 
  child_pid = fork ();
  if (child_pid > 0) {
    //sin el wait el proceso sigue corriendo, no hace nada esta muerto
    printf("Soy el proceso padre y espero 60 segundos antes de terminar, de mi hijo no se nada.\n");
    sleep (60);
  }
  else {
    exit (0);
  }
  return 0;
}