#include <stdio.h>
#define MAXLINHA	82 /* tamanho maximo da linha entrada */
int lelinha(char [],int);
int
main(void)
{
	int tam; /* tamanho corrente da linha */
	char linha[MAXLINHA];
	while((tam=lelinha(linha,MAXLINHA))>0)
		if(!(tam<2 && linha[0] == '\n'))
			printf("%s",linha);
	return 0;
}

int lelinha(char s[], int lim)
{
	int c,i;
	int n=0;
	for(i=0;i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
		s[i]=c;
		if(c==' ' || c=='\t')
			n++;
		else
			n=0;
	}
	if(c=='\n') {
		i=i-n;
		s[i]=c;
		++i;
	}
	s[i]='\0';
	return i;
}

