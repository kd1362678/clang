#include<stdio.h>
void calculate();
main()
{
	int a, b, sum;
	float ave;
	printf("®”‚ğ‚Q‚Â“ü—ÍF");
	scanf("%d%d", &a, &b);
	calculate(a,b,&sum,&ave);
	printf("‡Œv‚Í%d@•½‹Ï‚Í%.2f\n", sum,ave);
}
void calculate(int a, int b, int *sum, float *ave) {
	*sum = a + b;
	*ave = (float)(a + b) / 2;
}