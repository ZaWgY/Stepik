 #include <stdio.h>
 #include <stdlib.h>
 #include <stddef.h>
 #include <dlfcn.h>

int (*function)(int);

int main (int argc, char* argv[]) {
	char* libName = argv[1];
	char* funcName = argv[2];	
	char* argument = argv[3];
	int numberArgument = atoi(argument);
	void *hdl = dlopen(libName,RTLD_LAZY);
        function = (int (*)(int))dlsym(hdl,funcName);
	int result = function(numberArgument);
	printf("%d\n",result);
	return 0;
}

