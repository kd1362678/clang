#include<stdio.h>
main(){
	//•ÏX‚µƒ^ƒˆ
	int i;
	char s[100];
	printf("“ü—ÍF");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		s[i] = s[i] - 1;
	}
	printf("%s", s);
}
