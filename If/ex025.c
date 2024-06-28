#include<stdio.h>
main()
{
	char m;
	printf("文字を入力：");
	scanf("%c", & m);
	if (m > '0' && m<'9') {
		printf("数字");
	}
	else {
		if (m > 'A' && m<'Z') {
			printf("アルファベット");
		}
		else {
			if (m >'a' && m<'z') {
				printf("アルファベット");
			}
			else {
				printf("その他の文字");
			}
		}
	}
}