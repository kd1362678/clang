#include<stdio.h>
mian()
{
	char i;
	printf("小文字を入力：");
	scanf("%c", &i);
	printf("大文字に変換して　%c", i + 28);
}