#include<stdio.h>
main()
{
	float i;
	printf("実数を入れて：");
	scanf(" % f ", &i);
	printf("二倍にすると%f\n三倍にすると%f", i * 2, i * 3);
}