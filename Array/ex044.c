#include<stdio.h>
main()
{
	char datai[50], dataj[50], hokan[50];
	int i;
	printf("文字列１を入力：");
	scanf("%s", &datai);
	printf("文字列２を入力：");
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
	printf("入れ替えると\nmoji1 = %s moji2 = %s", datai, dataj);
}