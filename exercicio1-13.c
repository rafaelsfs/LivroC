#include <stdio.h>
#define DENTRO	1
#define FORA	0
#define MAX	23

int
main()
{
	int i,j,tam,c,estado;
	int palavra[MAX];
	for(i=0;i<MAX;i++)
		palavra[i]=0;
	estado = FORA;
	tam=0;
	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\n' || c == '\t')
		{
			if(estado == DENTRO)
			{
				//printf(" %d\n",tam);
				++palavra[tam];
				tam=0;
			}
			estado = FORA;
		}
		else 
		{
			if(estado == FORA)
				estado = DENTRO;
			//printf("%c",c);
			tam++;
		}
	}
	printf("chars\n");
	for(i=1;i<MAX;i++)
	{

		if (i<10)
			printf(" ");
		printf("%d |",i);
		for(j=0;j<palavra[i];j++)
			printf("=");
		printf(" %d\n",palavra[i]);
	}
	return 0;
}
