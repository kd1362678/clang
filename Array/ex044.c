#include<stdio.h>
main()
{
	char datai[50], dataj[50], hokan[50];
	int i;
	printf("������P����́F");
	scanf("%s", &datai);
	printf("������Q����́F");
	scanf("%s", &dataj);
	printf("moji1 = %s moji = %s\n", datai, dataj);

	for (i = 0; i != 50 ; i++) {
		hokan[i] = datai[i];
	}

	for (i = 0; i != 50; i++) {
		datai[i] = dataj[i];
	}
	for (i = 0; i != 50; i++) {
		dataj[i] = hokan[i];
	}
	printf("����ւ����\nmoji1 = %s moji2 = %s", datai, dataj);
}