#include<stdio.h>
main(){
	//�ύX���^��
	int i;
	char s[100];
	printf("���́F");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		s[i] = s[i] - 1;
	}
	printf("%s", s);
}
