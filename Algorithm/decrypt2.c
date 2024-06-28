#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i,j;
	char s[21];
	printf("文字列を入力：");
	scanf("%s", s);
	i = 0;
	while (s[i] != '\0') {
		printf("s[%d]の暗号化キー：",i);
		scanf("%d", &j);
		s[i] = s[i] - j;
		i++;
	}
	printf("暗号化済み文字列は：%s", s);

}