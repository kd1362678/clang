#include<stdio.h>
main()
{
	int m,sum;
	sum = 0;
	for (m = 1; m < 11; m++) {
		sum += m;
		printf("1����%d�܂ł̘a = %d\n", m,sum);
	}
}