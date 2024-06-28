#include<stdio.h>
main()
{
	float a[3][2],sum;
	int i,j;
	for (i = 0; i <= 2;i++) {
		sum = 0;
		for (j = 0; j <= 1; j++) {
			printf("a[%d][%d] = ", i, j);
			scanf("%f", &a[i][j]);
			sum += a[i][j];
		}
		
		printf("%ds–Ú‚Ì•½‹Ï%.2f\n", i,sum / 2);

	}
}