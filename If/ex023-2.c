#include<stdio.h>
main()
{
	int t;
	printf("�������́F");
	scanf("%d", &t);
	t = t % 4;
	if (t == 0) {
		printf("���邤�N�ł�");
	}
	else {
		printf("���邤�N�ł͂���܂���");
	}
}