#include<stdio.h>
main()
{
	int i, j;
	char a,*p;
	char data[10] = "Language";
	p = data;
	printf("data[] = %s\n検索文字は？", data);
	scanf("%s", &a);
	printf("検索結果は、");
	for (i = 0; *(p + i) != '\0'; i++) {
		if (*(p + i) == a) {
			printf("%d ", i + 1);
		}
	}
	printf("文字目です");
}