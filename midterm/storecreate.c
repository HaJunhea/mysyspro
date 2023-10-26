#include <stdio.h> 
#include "record.h"
int main(int argc, char* argv[])  
{ 

   struct record rec;
   FILE *fp;

   if (argc != 2) {
      fprintf(stderr, "How to use: %s FileName\n",argv[0]);
      exit(1); 
   }

   fp = fopen(argv[1], "wb");
   printf("%-9s %-7s %-4s %-2s %s\n", "id","name", "category","expired date","stock"); 
   while (scanf("%d %c %c %d %d", &rec.id, rec.name, rec.category, &rec.expireddate, &rec.stock) == 6) 
      fwrite(&rec, sizeof(rec), 1, fp);

   fclose(fp);
   exit(0);
}
