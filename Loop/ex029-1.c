#include<stdio.h>
main()
{
	int m;
	printf("数を入れて");
	scanf("%d" ,& m);
	while (m != 0) {
		m--;
		printf("*");
	}
}