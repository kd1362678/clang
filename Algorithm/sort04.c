#include<stdio.h>
#define DONT 8
main()
{
	int d[DONT] = { 70,60,80,50,40,20,30,10 };
	int i, j;
	int w;
	int gap;

	gap = DONT / 2;

	while (gap > 0) {
		for (i = gap; i < DONT; i++) {
			for (j = i - gap; j >= 0; j -= gap) {
				int k;
				for (k = 0; k < DONT; k++) {
					printf("%d ", d[k]);
				}
				printf("\n");

				if (d[j + gap] < d[j]) {
					w = d[j];
					d[j] = d[j + gap];
					d[j + gap] = w;

				}
				else {
					break;
				}
			}
		}
		gap = gap / 2;
		printf("--------------------\n");
	}
	for (i = 0;i<DONT; i++) {
		printf("%d ", d[i]);
	}
}