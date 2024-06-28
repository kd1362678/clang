#include<stdio.h>
main()
{
	int a, b, c;
	a = 5;
	b = 3;
	printf("%d %d\n", a, b);
	c = a;
	a = b;
	b = c;
	printf("%d %d", a, b);
}