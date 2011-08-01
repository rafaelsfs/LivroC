#include <stdio.h>
#define MAX	10

int
main()
{
	int i,j,c,nbranco,noutro;
	int ndigito[MAX];
	nbranco = noutro = 0;
	for(i=0;i<MAX;i++)
		ndigito[i]=0;
	while((c = getchar()) != EOF)
	{
		if(c >= '0' && c <= '9')
			++ndigito[c-'0'];
		else if(c == ' ' || c == '\n' || c == '\t')
		{
			++nbranco;
		}
		else
		{
			++noutro;
		}
	}
	printf("chars\n");
	for(i=0;i<MAX;i++)
	{
		if (i<10)
			printf(" ");
		printf("%d |",i);
		for(j=0;j<ndigito[i];j++)
		{
			printf("=");
			fflush(stdout);
			usleep(200000);
		}
		printf(" %d\n",ndigito[i]);
	}
	printf("bra|");
	for(j=0;j<nbranco;j++)
		printf("=");
	printf(" %d\n",nbranco);
	printf("out|");
	for(j=0;j<noutro;j++)
		printf("=");
	printf(" %d\n",noutro);
	return 0;
}
