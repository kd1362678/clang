#include<stdio.h>
main()
{
	char data[50];
	int i,cnt;
	printf("�񐔂ƕ����ł����킹�����");
	scanf("%d%s", &cnt, &data);
	for (i = 0; i < cnt; i++) {
		printf("%s\t", data);
	}
}