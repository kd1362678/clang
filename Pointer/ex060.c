#include<stdio.h>
main()
{
	int i, j;
	char a,*p;
	char data[10] = "Language";
	p = data;
	printf("data[] = %s\nŒŸõ•¶š‚ÍH", data);
	scanf("%s", &a);
	printf("ŒŸõŒ‹‰Ê‚ÍA");
	for (i = 0; *(p + i) != '\0'; i++) {
		if (*(p + i) == a) {
			printf("%d ", i + 1);
		}
	}
	printf("•¶š–Ú‚Å‚·");
}