#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i;
	srand(time(0));
	i = rand() % 5 + 1;
	printf("今日のあなたの運勢は%d",i);
	while (i != 0) {
		printf("☆");
		i--;
	}
	printf("です");
}