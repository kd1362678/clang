#include<stdio.h>
main()
{
	char num;
	printf("���Z�q������");
	scanf("%c", &num);
	switch (num) {

	case '*':
			printf("��Z�ł�");
			break;
	case '+':
			printf("���Z�ł�");
			break;
	case '-':
			printf("���Z�ł�");
			break;
	case '/':
			printf("���Z�ł�");
			break;
	case '%':
			printf("���܂�ł�");
			break;
	default:
			printf("���̑��ł�");
	}
}