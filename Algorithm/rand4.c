#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i;
	srand(time(0));
	i = rand() % 5 + 1;
	printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚Í%d",i);
	while (i != 0) {
		printf("™");
		i--;
	}
	printf("‚Å‚·");
}