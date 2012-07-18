#include <stdio.h>

/* conta espacos, tabulacao e nova linha  */
main()
{
	int c;
	int e;
	int nl;
	int t;
	
	e = 0;
	nl = 0;
	t = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') ++e;
		if (c == '\n') ++nl;
		if (c == '\t') ++t;

	}

	printf("Espacos: %d, Linhas: %d, Tabulacoes: %d\n",e,nl,t);
}
/* Testando
 * cat README.md | ./a.out 
 */
