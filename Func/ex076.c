#include<stdio.h>
void calculate();
main()
{
	int a, b, sum;
	float ave;
	printf("�������Q���́F");
	scanf("%d%d", &a, &b);
	calculate(a,b,&sum,&ave);
	printf("���v��%d�@���ς�%.2f\n", sum,ave);
}
void calculate(int a, int b, int *sum, float *ave) {
	*sum = a + b;
	*ave = (float)(a + b) / 2;
}