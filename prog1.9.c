#include <stdio.h>
#define MAXLINHA	1000 /* tamanho maximo da linha entrada */
int lelinha(char [],int);
void copia(char [],char []);
int
main(void)
{
	int tam; /* tamanho corrente da linha */
	int max; /* tamanho maximo visto ate agora */
	char linha[MAXLINHA];
	char maior[MAXLINHA];
	max=0;
	while((tam=lelinha(linha,MAXLINHA))>0)
		if(tam>max) {
			max=tam;
			copia(maior,linha);
		}
	if(max>0) /* entrada tinha uma linha */
		printf("%s",maior);
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

