#include<stdio.h>
main()
{
	int i, s;
	int d[11] = { 10,5,30,77,16,3,47,29,37,33 };
	printf("�l����́F");
	scanf("%d", &s);
	d[10] = s;
	for (i = 0; s != d[i]; i++) {

	}
	if (i >= 10) {
		printf("������Ȃ�����");
	}
	else {
		printf("�z���%d�ԖڂɌ�������", i);
	}
}