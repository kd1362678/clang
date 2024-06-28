#include<stdio.h>
main() {
	char i;
	printf("アルファベット？");
	getche(i);
	if (i >= 65 && i <= 91) {
		printf("その文字は大文字です");

	}
	else {
		printf("その文字箱文字です");
	}
}