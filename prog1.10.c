#include <stdio.h>
#define MAXLINHA	1000 /* tamanho maximo da linha entrada */

int max;
char linha[MAXLINHA];
char maior[MAXLINHA];

int lelinha(void);
void copia(void);

int
main(void)
{
	int tam;
	extern int max;
	extern char maior[];
	
	max=0;
	while((tam=lelinha())>0)
		if(tam>max) {
			max=tam;
			copia();
		}
	if(max>0) /* entrada tinha uma linha */
		printf("%s",maior);
	return 0;
}

int lelinha(void)
{
	int c,i;
	extern char linha[];

	for(i=0;i<MAXLINHA-1 && (c=getchar()) != EOF && c != '\n'; ++i)
		linha[i]=c;
	if(c=='\n') {
		linha[i]=c;
		++i;
	}
	linha[i]='\0';
	return i;
}

/* copia: versao especializada */
void copia()
{
	int i;
	extern char linha[],maior[];
	
	i=0;
	while((maior[i]=linha[i]) != '\0')
		++i;
}

