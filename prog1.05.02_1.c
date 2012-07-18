/* programa da pagina 17 */
#include <stdio.h>

/* conta caracteres de entrada  */
main()
{
	long nc;
	
	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%1d\n",nc);
}
/* Testando
 * echo "01234 56789" | ./a.out 
 *
 * echo -n "01234 56789" | ./a.out 
 */
