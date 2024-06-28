#include<stdio.h>
main() {
	int i, j, k;
	int a[2][2][3], gokei;
	gokei = 0;
	for (i = 0; i <= 1; i++) {
		for (j = 0; j <= 1; j++) {
			printf("ƒAƒp[ƒg%d(1ŠK):", i + 1);
			for (k = 0; k <= 2; k++){
				printf(" ");
				scanf("%d", a[i][j][k]);
				gokei += a[i][j][k];
			}
			printf("2ŠK");

		}
		printf("\n");
	}
}