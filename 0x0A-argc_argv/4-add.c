#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	int total;
	int i;

	total = 0;

	if (argc == 1)
	{
		printf("%d\n", total);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			char *arg;
			int j;

			j = 0;
			arg = argv[i];

			while (arg[j])
			{
				if (!isdigit(arg[j]))
				{
					printf("Error\n");
					return 1;
				}
				j++;
			}

			total += atoi(arg);
		}

		printf("%d\n", total);
	}

	return 0;
}
