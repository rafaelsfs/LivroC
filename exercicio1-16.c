#include <stdio.h>
#define MAXLINHA	81 /* tamanho maximo da linha entrada */
int lelinha(char [],int);
void copia(char [],char []);
int
main(void)
{
	int tam; /* tamanho corrente da linha */
	int max; /* tamanho maximo visto ate agora */
	int tmp; /* tamanho da linha com caracteces acima do limite */
	char prime[MAXLINHA];
	char linha[MAXLINHA];
	char maior[MAXLINHA];
	max=0;
	tmp=0;
	while((tam=lelinha(linha,MAXLINHA))>0) {
		if (linha[tam-1] != '\n') {
			tmp=tmp+tam;
			copia(prime,linha);
		} else {
			tam=tam+tmp;
			if(tam>max) {
				max=tam;
				if(tam>MAXLINHA-1)
					copia(maior,prime);
				else
					copia(maior,linha);
				tmp=0;
			}
		}
	}
	if(max>0) /* entrada tinha uma linha */
		printf("%d: [%s]\n",max,maior);
	return 0;
}

int lelinha(char s[], int lim)
{
	int c,i;
	for(i=0;i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
		s[i]=c;
	if(c=='\n') {
		s[i]=c;
		++i;
	}
	s[i]='\0';
	return i;
}

/* copia: copia 'de' --> 'para'; presume-se que 'para' eh grande o suficiente */
void copia(char para[], char de[])
{
	int i;
	
	i=0;
	while((para[i]=de[i]) != '\0')
		++i;
}

