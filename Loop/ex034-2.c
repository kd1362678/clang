#include<stdio.h>
main()
{
	int i,j;
	printf("”‚ÍH");
	scanf("%d",&i);
	j = 1;
	do {
		while (j <= 5) {
			printf("*");
			j++;
		}
		j = 1;
		printf("\n");
		i--;
	} while (i != 0);
}