#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <limits.h>
#include <stdint.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <regex.h>
#include <stdbool.h>

int getPPIDByPID(int pid){
   FILE *file;
   int ppid;
   char tmp[30];
   sprintf(tmp, "/proc/%d/stat", pid);
   file = fopen(tmp,"r");
   fscanf(file,"%*d %*s %*c %d", &ppid);
   fclose(file);
   return ppid;
}


int main(int argc, char *argv[])
{	 
   int pid = atoi(argv[1]);
   printf("%d\n",pid);
   while(pid != 1){
      pid = getPPIDByPID(pid);
      printf("%d\n",pid);
   }
   return 0;
}