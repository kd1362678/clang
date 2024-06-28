#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4 };
	int i,*p_a;
	float sum, ave,*p_b;

	p_a = &a;
	p_b = &b;

	sum = 0;

	for (i = 0; i < 6; i++) {
		sum += *p_a;
		p_a++;

	}
	ave = sum / i;
	printf("配列a 合計 = %.0f\t平均 = %.3f\n", sum, ave);
	sum = 0;
	for (i = 0; i < 4; i++) {
		sum += *p_b;
		p_b++;

	}
	ave = sum / i;
	printf("配列a 合計 = %.3f\t平均 = %.3f", sum, ave);
}