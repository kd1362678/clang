#include<stdio.h>
main()
{
	float i, ni, sa;
	printf("一つ目の実数");
	scanf("%f", i);
	printf("2つ目の実数");
	scanf("%f", ni);
	printf("3つ目の実数");
	scanf("%f", sa);
	printf("合計＝%f,平均＝%f", i + ni + sa, (i + ni + sa) / 3);
}