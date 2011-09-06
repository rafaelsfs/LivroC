#include <stdio.h>
#define TAB	4
int
main(void)
{
	int c,i;
	i=0;
	while((c=getchar()) != EOF) {
		if(c==' ')
			i++;
		else 
			if (i == TAB) {
				printf("\t");
				i=0;
			}
			else
			{
				while (i>0) {
					printf(" ");
					i--;
				}
				printf("%c",c);
			}


	}
	return 0;
}
