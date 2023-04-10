#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int coins;
	int change;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	coins = atoi(argv[1]);

	if (coins < 0)
	{
		printf("0\n");
	}

	change = 0;

	change += coins / 25;
	coins %= 25;

	change += coins / 10;
	coins %= 10;

	change += coins / 5;
	coins %= 5;

	change += coins / 2;
	coins %= 2;

	change += coins;

	printf("%d\n", change);
	return (0);
}
