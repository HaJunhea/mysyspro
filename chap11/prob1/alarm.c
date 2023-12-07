#include <stdio.h>
int main( )
{
   alarm(5);
   printf("infinite loop\n");
   while (1) {
      sleep(1);
      printf("one second has passed\n");
   }
   printf("Not running\n");
}

