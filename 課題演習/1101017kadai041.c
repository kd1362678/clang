//1101017 kadai041.c
#include<stdio.h>
main()
{
	int g, m,a,k;
	m = 0;
	k = 0;
	while (m != -999) {
		printf("����(-999 �ŏI��)?");
		scanf("%d"&, m);
		g += m;
		k ++;
	}
	a = (float)g / k;
	printf("���v�@���@%d\t���ρ@���@%.2f\n", g, a);
}