#include <stdio.h>
#define TAB	4
int
main(void)
{
	int c,i;
	while((c=getchar()) != EOF) {
		if(c=='\t')
			for(i=0;i<TAB;i++)
				printf(" ");
		else
			printf("%c",c);
	}
	return 0;
}
