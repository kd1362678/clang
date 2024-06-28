#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {

	int i;
	srand(time(0));
	i = rand();
	i = rand(i);
	i = rand(i);
	i = rand(i);
	i = rand(i);
	i = rand(i);

	i = rand() % 100;

	if (i <= 30) {
		printf("‚©‚¢‚µ‚ñ‚Ì‚¢‚¿‚°‚«I");

	}
	else {
		printf("’ÊíUŒ‚");
	}
}