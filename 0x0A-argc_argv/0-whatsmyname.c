#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char *program_name = argv[0];
	char *base_name = strrchr(program_name, '/');
	
	if (base_name == NULL)
	{
		base_name = program_name;
	}
	else
	{
		base_name++;
	}
	printf("%s\n", base_name);
	return 0;
}