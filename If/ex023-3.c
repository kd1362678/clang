#include<stdio.h>
main()
{
	int en, d ,di;
	printf("演算子を入力：");
	scanf("%d", &en);
	printf("2つの整数を入力：");
	scanf("%d%d", &d, &di);
	if (en <= 2) {
		if (en == 1) {
			d = d + di;
		}
		else {
			d = d - di;
		}
	}
	else {
		if (en == 3){
			d = d * di;
		}
		else {
			d = d / di;
		}
	}
	printf("%d", d);
}