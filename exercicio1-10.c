#include <stdio.h>

int
main()
{
	char c;
	while((c  =  getchar())  !=  EOF)
	{
		if (c == '\t')
			printf("\\t");
		else
			if (c == '\b')
				printf("\\b");
			else
				if (c == '\\')
					printf("\\\\");
				else
					putchar(c);
	}
}

/* para testar o programa de forma fácil, execute os seguintes comandos:
 * echo -e "Linguagem\tC:\ \b"
 * depois:
 * echo -e "Linguagem\tC:\ \b" | ./exercicio1-10
 */
