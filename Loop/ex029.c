#include<stdio.h>
main()
{
	int m,mi;
	mi = 0;
	printf("数を入れて");
	scanf("%d", &m);
	while (m != mi) {
		printf("*");
		mi ++;
	}
}