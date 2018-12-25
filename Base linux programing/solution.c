#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	int status = system("echo $$");
	printf("%d\n", status);

   return 0;
}