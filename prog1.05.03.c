/* programa da pagina 18 */
#include <stdio.h>

/* conta caracteres de entrada  */
main()
{
	int c,nl;
	
	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%d\n",nl);
}
/* Testando
 * cat README.md | ./a.out 
 */
