#include<stdio.h>
main()
{
	int m ,mi;
	printf("��������");
	scanf("%d", &m);
	mi = 0;
	while (mi < 11) {
		printf("%d + %d = %d\n", m, mi, mi + m);
		mi++;
	}
}