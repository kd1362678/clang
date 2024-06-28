#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{

	int i;
	srand(time(0));
	i = rand() / (RAND_MAX / 6 + 1) + 1;
	printf("%d", i);

}