#include<stdio.h>
main()
{
	char i[100],*j;
	int k;
	j = gets(i);
	while (j != NULL) {
		printf("%s\n", i);
		j = gets(i);
	}
	printf("error");
}