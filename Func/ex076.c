#include<stdio.h>
void calculate();
main()
{
	int a, b, sum;
	float ave;
	printf("整数を２つ入力：");
	scanf("%d%d", &a, &b);
	calculate(a,b,&sum,&ave);
	printf("合計は%d　平均は%.2f\n", sum,ave);
}
void calculate(int a, int b, int *sum, float *ave) {
	*sum = a + b;
	*ave = (float)(a + b) / 2;
}