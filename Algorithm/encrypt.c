#include<stdio.h>
main()
{
	int i;
	char s[100];
	printf("文字を入力してください：");
	scanf("%s", s);
	i = 0;
	while(s[i] != '\0'){
		s[i] = s[i] + 1;
		i++;
	}
	printf("%s", s);
}