#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
void intHandler();
int main( )
{
   signal(SIGINT,intHandler);
   while (1)
      pause();
   printf("Not executed\n");
}
void intHandler(int signo)
{
   printf("Interrupt signal processing\n");
   printf("Signal number: %d\n", signo);
   exit(0);
}
