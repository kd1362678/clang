#include<stdio.h>
main(){
	//変更しタヨ
	int i;
	char s[100];
	printf("入力：");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		s[i] = s[i] - 1;
	}
	printf("%s", s);
}
