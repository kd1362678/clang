#include<stdio.h>
#define SIZE 5
main()

{
	int d[SIZE] = { 30,7,25,16,10 };
	int i,j,w;
	for (i = 0; i < SIZE; i++) {
		printf("%d\n", d[i]);
	}
	for (i = 0; i < SIZE - 1; i++) {
		for (j = i + 1; j < SIZE; j++) {
			if (d[i] > d[j]) {
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}
		for (i = 0; i < 5; i++) {
			printf("%d\n", d[i]);
		}
}