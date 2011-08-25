#include <stdio.h>
#define MAXLINHA	82 /* tamanho maximo da linha entrada */
int lelinha(char [],int);
int inverte(char [],int);
int
main(void)
{
	int tam; /* tamanho corrente da linha */
	char linha[MAXLINHA];
	while((tam=lelinha(linha,MAXLINHA))>0) {
		inverte(linha,tam);
		printf("%s",linha);
	}
	return 0;
}

int
lelinha(char s[], int lim)
{
	int c,i;
	for(i=0;i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
		s[i]=c;
	}
	if(c=='\n') {
		s[i]=c;
		++i;
	}
	s[i]='\0';
	return i;
}

int
inverte(char s[], int lim)
{
	int c,i;
	int tam=lim-2;
	for(i=0;i<tam/2; ++i) {
		c=s[i];
		s[i]=s[tam-i];
		s[tam-i]=c;
	}
	return i;
}

