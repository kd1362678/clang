#include<stdio.h>
main()
{
	char m;
	printf("��������́F");
	scanf("%c", & m);
	if (m > '0' && m<'9') {
		printf("����");
	}
	else {
		if (m > 'A' && m<'Z') {
			printf("�A���t�@�x�b�g");
		}
		else {
			if (m >'a' && m<'z') {
				printf("�A���t�@�x�b�g");
			}
			else {
				printf("���̑��̕���");
			}
		}
	}
}