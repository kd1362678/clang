#include<stdio.h>
main()
{
	int m ,mi;
	printf("数を入れて");
	scanf("%d", &m);
	mi = 0;
	while (mi < 11) {
		printf("%d + %d = %d\n", m, mi, mi + m);
		mi++;
	}
}