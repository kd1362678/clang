#include<stdio.h>
void minmax();

main()
{
	int a, b, c, min, max;
	printf("�������R����");
	scanf("%d%d%d", &a, &b, &c);
	minmax(a, b, c, &min, &max);
	printf("�ő�l = %d �ŏ��l = %d", max, min);
}
void minmax(int a, int b, int c, int *min, int *max) {
	int mn = a, mx = c;
	if (mn > b)
		mn = b;
	if (mn > c)
		mn = c;
	if (mx < a)
		mx = a;
	if (mx < b)
		mx = b;
	*min = mn;
	*max = mx;
	return;
}