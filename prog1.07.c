#include <stdio.h>
int pot(int, int);

int
main()
{
	int i;
	for(i=0;i<10;i++)
		printf("%d %d %d\n", i, pot(2,i), pot(-3,i));
	return 0;
}

int
pot(int base, int n)
{
	int i, p;
	p=1;
	for(i=1;i<=n;i++)
		p=p*base;
	return p;
}
