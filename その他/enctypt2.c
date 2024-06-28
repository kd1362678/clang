#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	srand(time(0));
	int i,j;
	int k[20];
	char s[21];
	printf("文字を入力してください：");
	scanf("%s", s);
	i = 0;
	while (s[i] != '\0') {
		k[i] = rand() % 5;
		s[i] = s[i] + k[i];
		i++;
	}
	printf("\n暗号化文字列は：%s", s);
	j = 0;
	printf("\n暗号化キーは");
	while (j < i) {
		printf("%d", k[j]);
		j++;
	}
	
}