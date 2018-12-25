#include <dirent.h> 
#include <stdio.h> 
#include <string.h>

int main(void) {
  int counter = 0;
  DIR *d;
  FILE *file;
  char filename[267];
  char processName[512] ;
  struct dirent *dir;
  d = opendir("/proc");
  if (d) {
    while ((dir = readdir(d)) != NULL) {
      //printf("%s\n", dir->d_name);
      sprintf(filename, "/proc/%s/stat", dir->d_name);
      file = fopen(filename,"r");
      if(file)
      {
        fscanf(file,"%*d %s", processName);
      } 
      if(strstr(processName, "genenv") != NULL){
        counter++;
      }
    }
    printf("%d\n", counter);
    fclose(file);
    closedir(d);
  }
  return(0);
}