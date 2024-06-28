#include<stdio.h>
main()
int syou(int data[]);
int kou(int data[]);
{
	char* p;
	int data[8] = { 6,10,8,2,9,5,1,7 };
	scanf("%s", &p);
	if (p = "~‡") {
		kou(data[]);
	}
	if (p = "¸‡") {
		syou(int data[])
	}
	for (int i = 0; i < 8; i++) {
		printf("%d", data[i]);
	}
}
int syou(int data[]) {
	int w;
	for (int i = 1; i < 5; i++) {
		for (int j = i - 1; j >= 0; j - 1) {
			while (data[j + 1] >= data[j]) {
				w = data[i];
				data[i] = data[j];
				data[j] = w;
			}
		}
		ret
	}
}
int syou(int data[]) {
	int w;
	for (int i = 1; i < 5; i++) {
		for (int j = i - 1; j >= 0; j - 1) {
			while (data[j + 1] <= data[j]) {
				w = data[i];
				data[i] = data[j];
				data[j] = w;
			}
		}
	}
}