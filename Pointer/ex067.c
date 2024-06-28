#include<stdio.h>
#include<string.h>
main()
{
	char *p_tbl[] = { "C","Algorithm","Programming1","Programming2" },*w;
	char** p = p_tbl;
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 1; j < 3; j++) {
			if (strcmp(*(p+i),*(p+j)) < 0) {
				w = *(p + i);
				*(p + i) = *(p + j);
				*(p+j) = w;

			}

		}
	}
	for (i = 0; i < 4; i++) {
		printf("%s\n",*(p+i));
	}

}