#include <stdio.h>
#define DENTRO	1
#define FORA	0

int
main()
{
	int c,estado;
	estado = FORA;
	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\n' || c == '\t')
		{
			if(estado == DENTRO)
				printf("\n");
			estado = FORA;
		}
		else 
		{
			if(estado == FORA)
				estado = DENTRO;
			putchar(c);
		}
	}
	return 0;
}
