//1101017 kadai041.c
#include<stdio.h>
main()
{
	int g, m,a,k;
	m = 0;
	k = 0;
	while (m != -999) {
		printf("整数(-999 で終了)?");
		scanf("%d"&, m);
		g += m;
		k ++;
	}
	a = (float)g / k;
	printf("合計　＝　%d\t平均　＝　%.2f\n", g, a);
}