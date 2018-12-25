#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>


int main(void)
{	
   FILE *file;
   int ppid;
   int pid = getpid();
   char tmp[30];
   sprintf(tmp, "/proc/%d/stat", pid);
   file = fopen(tmp,"r");
   fscanf(file,"%*d %*s %*c %d", &ppid);
   printf("%d\n", ppid);
   fclose(file);
   return 0;
}