#include<stdio.h>
main()
{
	char m;
	printf("��������́F");
	scanf("%c", &m);
	if (m > 'A' && m < 'Z') {
		m = m + 32;
		printf("�ϊ������%c\n", m);
	}
	else {
		if (m > 'a' && m < 'z') {
			m = m - 32;
			printf("�ϊ������%c\n", m);
		}
		else {
			printf("�G���[");
		}
	}
}