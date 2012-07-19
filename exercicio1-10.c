#include <stdio.h>

/* mostra ocorrencias de espaco, tabulacao e nova linha  */
main()
{
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\\')
		       	printf("\\\\");
		else if (c == '\n')
		       	printf("\\n");
		else if (c == '\t') 
			printf("\\t");
		else
			putchar(c);

	}
}

