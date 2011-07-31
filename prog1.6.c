#include <stdio.h>
int
main()
{
	int c,i,nbranco,noutro;
	int ndigito[10];

	nbranco = noutro = 0;
	for(i=0;i<10;i++)
		ndigito[i]=0;
	while((c = getchar()) != EOF)
		if(c >='0' && c <= '9')
			++ndigito[c-'0']; //este eh um recurso para traduzir um caracter de digito "0-9" num inteiro, pois matriz soh suporte inteiro como indice de array
		else if(c == ' ' || c == '\n' || c == '\t')
			++nbranco;
		else
			++noutro;
	printf("digitos=");
	for(i=0;i<10; ++i)
		printf("[%d]=%d | ",i,ndigito[i]);
	printf("espaco branco = %d, outros = %d\n", nbranco, noutro);
}
