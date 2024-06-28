#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int i,j;
	j = 0;
	for (i = 0; i < 100; i++) {
		srand(time(0)+j);
		j = rand() % 300 + 1;
		printf("%d\n", j);
	}
}