#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i;
	srand(time(0));
	i = rand() % 5 + 1;
	printf("�����̂��Ȃ��̉^����%d",i);
	while (i != 0) {
		printf("��");
		i--;
	}
	printf("�ł�");
}