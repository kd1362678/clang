#include<stdio.h>
main() {

	int data[10]={ 10,5,30,77,16,3,47,29,37,33 };
	int i,s;
	i = 0;
	printf("値を入力：");
	scanf("%d", &s);
	do {
		if (s == data[i]) {
			break;
		}
		i++;
	} while (i < 10);
	if (i == 10) {
		printf("見つからなかった");
	}
	else {
		printf("%d", i);
	}
}