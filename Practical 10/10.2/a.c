#include <stdio.h>


int main () {
   FILE *fp;
   int ch;

   fp = fopen("a.txt", "w+");
   for(ch = 33 ; ch < 40; ch++ ) {
      fputc(ch, fp);
   }
   fclose(fp);

   return 0;
}