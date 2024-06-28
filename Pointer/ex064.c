#include<stdio.h>
main()
{
	int j=0,i;
	char* p[3] = { "car","bus","shinkansen" };
	char* pp;
	for (i = 0; i < 3; i++) {
		pp = p[i];
		while (*pp) {
			putchar(*pp++);
		}
		putchar('\n');
	}
}