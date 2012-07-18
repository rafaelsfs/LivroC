/* programa da pagina 18 */
#include <stdio.h>

/* conta caracteres de entrada; 2a. versao */
main()
{
	double nc;
	for(nc=0;getchar() != EOF;++nc)
		;
	printf("%.0f\n",nc);
}
/* Testando
 * echo "01234 56789" | ./a.out 
 *
 * echo -n "01234 56789" | ./a.out 
 */
