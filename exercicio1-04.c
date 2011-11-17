#include <stdio.h>

main()
{
	int fahr, celsius;
	int inicio, fim, incr;
	inicio=-17;
	fim=148;
	incr=11;
	celsius=inicio;
	printf("Cel\tFahr\n");
	while(celsius<=fim)
	{
		fahr=(celsius*1.8)+32;
		printf("%d\t%d\n",celsius,fahr);
		celsius=celsius+incr;
	}
}

