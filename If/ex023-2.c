#include<stdio.h>
main()
{
	int t;
	printf("西暦を入力：");
	scanf("%d", &t);
	t = t % 4;
	if (t == 0) {
		printf("うるう年です");
	}
	else {
		printf("うるう年ではありません");
	}
}