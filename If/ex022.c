#include<stdio.h>
main()
{
	int i;
	printf("西暦を入力：");
	scanf("%d" ,&i);
	if (i > 1988) {
		printf("平成生まれです");
	}
	else {
		printf("平成生まれででない");
	}
}