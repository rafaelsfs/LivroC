#include <stdio.h>

int
main()
{
	char c;
	int nl,nt,ne;
	nl=nt=ne=0;
	while((c=getchar()) != EOF)
	{
		if(c=='\n')
			++nl;
		if(c=='\t')
			++nt;
		if(c==' ')
			++ne;
	}
	printf("Lines\tTabs\tSpaces\n");
	printf("%d\t%d\t%d\n",nl,nt,ne);
}
