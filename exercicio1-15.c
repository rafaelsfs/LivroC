#include <stdio.h>
int celsius(int);

main()
{
	int fahr;
	int inicio, fim, incr;
	inicio=0;
	fim=300;
	incr=20;
	fahr=inicio;
	while(fahr<=fim)
	{

		printf("%d\t%d\n",fahr,celsius(fahr));
		fahr=fahr+incr;
	}
}

int
celsius(int n)
{
	return 5*(n-32)/9;
}



