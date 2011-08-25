#include <stdio.h>
#define MAXLINHA	82 /* tamanho maximo da linha entrada */
int lelinha(char [],int);
int
main(void)
{
	int tam; /* tamanho corrente da linha */
	char linha[MAXLINHA];
	int tmp=0;
	while((tam=lelinha(linha,MAXLINHA))>0) {
		if(tam>80 || tmp>0)
			printf("%s",linha);
		if(tam>80 && linha[MAXLINHA-2] != '\n')
			tmp++;
		else
			tmp=0;
	}
	printf("\n");
	return 0;
}

int lelinha(char s[], int lim)
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

