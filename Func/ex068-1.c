#include<stdio.h>
main()
{
	int i,j,k;
	k = scanf("%d%d", &i, &j);
	if (k != EOF) {
		printf("%d", k);
	}
	else {
		printf("EOF");
	}
}