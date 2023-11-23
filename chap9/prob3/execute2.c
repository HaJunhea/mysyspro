#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main( ) 
{
   printf("Start parent process\n");
   if (fork( ) == 0) 
   {
      execl("/bin/echo", "echo", "hello", NULL);
      fprintf(stderr,"first failure"); 
      exit(1);
   }
   if (fork( ) == 0) 
   {
      execl("/bin/date", "date", NULL);
      fprintf(stderr,"second failure"); 
      exit(2);
   }

   if (fork( ) == 0) 
   {
      execl("/bin/ls","ls", "-l", NULL);
      fprintf(stderr,"Third failure"); 
      exit(3);
   }
   printf("Start parent process end\n");
}

