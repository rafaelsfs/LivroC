#include <stdio.h>

int atoi(char s[]);

int
main(int argc, char *argv[])
{
	printf("String: %s\n",argv[1]);
	printf("Inteiro: %d\n", atoi(argv[1])-1);
	return 0;
}

int atoi(char s[])
{
	int i,n;
	n=0;

	for(i=0;s[i]>='0' && s[i]<='9'; ++i)
		n=10*n+(s[i]-'0');
	return n;
}