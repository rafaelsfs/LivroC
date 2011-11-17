#include <stdio.h>

main()
{
	int fahr, celsius;
	int inicio, fim, incr;
	inicio=0;
	fim=300;
	incr=20;
	fahr=inicio;
	printf("Fahr\tCelsius\n");
	while(fahr<=fim)
	{
		celsius=5*(fahr-32)/9;
		printf("%d\t%d\n",fahr,celsius);
		fahr=fahr+incr;
	}
}

