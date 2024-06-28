#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a;
	srand(time(0));
	a = rand() % 100 + 1;
	if (a > 50) {
		printf("™ƒŒƒA");
	}
	if(a >20 && a<50){
		printf("™™ƒŒƒA");
	}
	if (a > 6 && a < 20) {
		printf("™™™SR");
	}
	if (a > 2 && a < 6) {
		printf("™™™™UR");
	}
	if (a < 2) {
		printf("™™™™™LR");
	}
}