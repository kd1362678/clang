#include<stdio.h>
void cut(char a[], char b[]);
main()
{
	char a[100];
	char b[100];
	printf("�z��a:");
	scanf("%s", a);
	printf("\n�z��b:");
	scanf("%s", b);
	cut(a, b);
	printf("\n�z��a:%s\n", a);
}
void cut(char *p_a, char *p_b) {
	for (; *p_a != '\0'; *p_a++);
	for (; *p_b != '\0';) {
		*p_a++ = *p_b++;
	}
	return;
}