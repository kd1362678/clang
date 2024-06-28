#include<stdio.h>
void minmax();

main()
{
	int a, b, c, min, max;
	printf("®”‚ð‚R‚Â“ü—Í");
	scanf("%d%d%d", &a, &b, &c);
	minmax(a, b, c, &min, &max);
	printf("Å‘å’l = %d Å¬’l = %d", max, min);
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