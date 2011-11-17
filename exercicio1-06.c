/* 2o programa da pagina 16 */
#include <stdio.h>
/* copia entrada para saida; 2a. versao */
main()
{
	printf("%d\n",(getchar() != EOF));
}

/* quando for executar este programa, lembre-se que voce pode fazer assim: 
 * cat README.md | ./exercicio1-06
 * ou assim:
 * ./exercicio1-06
 * (digite uma letra e depois aperte [Enter]
 * Aparecerá 1, somente aparece 0 se for fim de arquivo que a funcao getchar dá um erro que retorna -1
 * que eh o mesmo valor da constante EOF(veja o proximo exercicio)
 */
