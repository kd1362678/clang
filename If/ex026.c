#include<stdio.h>
main()
{
	int m;
	printf("月を入力：");
	scanf("%d", &m);
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		printf("最終日は３１日です");
	}
	else {
		if (m == 2) {
			printf("最終日は２８日です");
		}
		else {
			printf("最終日は３０日です");
		}
	}
}