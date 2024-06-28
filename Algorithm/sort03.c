#include<stdio.h>
main()
{
	int d[5] = { 30,7,25,16,10 },w;
	for (int i = 0; i < 5; i++) {
		printf("%d\n", d[i]);
	}
	for (int i = 1; i <5; i++) {
		for (int j = i-1; j >= 0; j--) {
			if (d[j + 1] >= d[j]) {
				break;
			}else{
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w;
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		printf("%d\n", d[i]);
	}
}