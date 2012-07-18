#include <stdio.h>

/* troca dois ou mais espacos seguidos por um espaco  */
main()
{
	int c;
	int e;
	
	e=0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++e;
		} else {
			if (e > 0) {
				e=0;
				printf(" ");
			}
			putchar(c);

		}

	}

}

