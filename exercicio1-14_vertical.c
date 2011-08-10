#include <stdio.h>
#define MAX	12

int
main()
{
	int i,j,c,maior,tmp;
	int caracter[MAX];
	maior=0;
	printf("\f");
	for(i=0;i<MAX;i++)
		caracter[i]=0;
	while((c = getchar()) != EOF)
	{
		if(c >= '0' && c <= '9')
			++caracter[c-'0'];
		else if(c == ' ' || c == '\n' || c == '\t')
		{
			++caracter[10];
		}
		else
		{
			++caracter[11];
		}
	}
	for(i=0;i<MAX;i++)
		if(caracter[i] > maior)
			maior = caracter[i];
	tmp = maior;
	for(i=maior;i>0;i--)
	{
		if ((i % 2) > 0)
			printf("\e[0;36m");
		else
			printf("\e[0;0m");
		if(i<10)
			printf(" %d",i);
		else
			printf("%d",i);

		printf("\e[0;0m");
		//printf("|");
		printf(" ");
		if ((i % 2) > 0)
			printf("\e[0;36m");
		printf("---");
		for(j=0;j<MAX;j++)
		{

			if (caracter[j] >= i)
			{
				printf("\e[0;0m");
				//printf("|");
				printf("|");
				if ((i % 2) > 0)
					printf("\e[0;36m");
				printf("-----");
			}
			else
				printf("------");
			fflush(stdout);
			usleep(9000);

		}
		printf("\n");
	}
	printf("\e[0;0m");
	for(i=0;i<78;i++)
		printf("=");
	printf("\n");
	printf("      ");
	for(i=0;i<MAX;i++)
		if(i<10)
			printf("%d     ",i);
		else if (i==10)
			printf("bra   ");
		else
			printf("outros");
	printf("\n");
	printf("Maior numero de ocorrencias: \e[0;31m%d\e[0;0m\n",maior);
	return 0;
}
