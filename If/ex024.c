#include<stdio.h>
main()
{
	int m;
	printf("文字を入力：");
	scanf("%c", &m);
	if (m >= 91||m<=64){
			printf("その他の文字です");
	}
	else {
		printf("大文字です");
	}
}