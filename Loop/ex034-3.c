#include<stdio.h>
main()
{
	int i ,j,k;
	printf("���́H");
	scanf("%d",&i);
	j = 1;
	k = 1;
	do {
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