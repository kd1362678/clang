#include<stdio.h>
main()
{
	char m;
	printf("•¶Žš‚ð“ü—ÍF");
	scanf("%c", &m);
	if (m > 'A' && m < 'Z') {
		m = m + 32;
		printf("•ÏŠ·‚·‚é‚Æ%c\n", m);
	}
	else {
		if (m > 'a' && m < 'z') {
			m = m - 32;
			printf("•ÏŠ·‚·‚é‚Æ%c\n", m);
		}
		else {
			printf("ƒGƒ‰[");
		}
	}
}