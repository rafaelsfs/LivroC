#include <stdio.h>

int minusculo(int);

int
main(int argc, char *argv[])
{
	printf("%s -> %s\n", argv[1], minusculo(argv[1][0]));
	return 0;
}

int minusculo(int c)
{
	if(c>='A' && c<= 'Z'))
		return c + 'a'-'A';
	else
		return c;
}
