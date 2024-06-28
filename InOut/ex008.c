#include <stdio.h>
main()
{
	float f1;
	f1 = 10.5;
	printf("f1 = %f \n", f1);
	printf("f1/2=%f \n", f1 / 2);
	printf("f1/4=%f\n", f1 / 4);
	int a = 5;
	float b;
	printf("a / 2 = %d \n", a / 2);
	b = a / 2;
	printf("a/2 = %f \n", b);
	printf("a/2 = %f \n", a / 2.0);
	b = 5.0;
	printf("b/3=%8.3f\n", b / 3.0);
}