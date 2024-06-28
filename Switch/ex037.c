#include<stdio.h>
main()
{
	char num;
	printf("‰‰Zq‚ğ“ü‚ê‚Ä");
	scanf("%c", &num);
	switch (num) {

	case '*':
			printf("æZ‚Å‚·");
			break;
	case '+':
			printf("‰ÁZ‚Å‚·");
			break;
	case '-':
			printf("Œ¸Z‚Å‚·");
			break;
	case '/':
			printf("œZ‚Å‚·");
			break;
	case '%':
			printf("‚ ‚Ü‚è‚Å‚·");
			break;
	default:
			printf("‚»‚Ì‘¼‚Å‚·");
	}
}