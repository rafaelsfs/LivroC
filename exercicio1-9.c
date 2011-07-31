#include <stdio.h>

int
main()
{
	char c;
	int ne;
	ne   =     0;
	while((c  =  getchar())  !=  EOF)
	{
		if(c  ==  ' ')
		{
			ne++;
		}
	       	else
		{
			if (  ne > 0  )
			{
				printf(" ");
				ne  =  0;
			}
			putchar(c);
		}
	}
}
