#include<stdio.h>
main()
{
	char m;
	printf("文字を入力：");
	scanf("%c", &m);
	if (m > 'A' && m < 'Z') {
		m = m + 32;
		printf("変換すると%c\n", m);
	}
	else {
		if (m > 'a' && m < 'z') {
			m = m - 32;
			printf("変換すると%c\n", m);
		}
		else {
			printf("エラー");
		}
	}
}