#include<stdio.h>
main()
{
	int b, m;
	printf("整数を入れて：");
	scanf("%d", &b);
	for (m = 1; m <= 5; m++) {
		printf("%d ", b * m);
	}
}