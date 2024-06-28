#include<stdio.h>
void re(char* p_str1 ,char *p_str2);
main()
{
	char str1[256], str2[256];
	printf("•¶š—ñHF");
	gets(str1);
	printf("str1:%s\n", str1);
	re(str1,str2);
	printf("str2:%s", str2);
}
void re(char* p_str1 ,char* p_str2) {
	int i;
	for (i = 0; *p_str1 != '\0'; i++, *p_str1++);
	for (; *p_str2 != '\0';) {
		*p_str2++ = *p_str1--;
	}
	return;
}