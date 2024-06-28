#include<stdio.h>
main()
{
	int i ,j,k,s;
	printf("”‚ÍH");
	scanf("%d",&i);
	j = 1;
	k = 1;
	s = i-1;
	do {
		while (j <= s) {
			printf(" ");
			j++;
		}
		j = 1;
		s--;
		while (j <= k) {
			printf("*");
			j++;
		}
		printf("\n");
		j = 1;
		k++;
		i--;
	} while (i != 0);
}