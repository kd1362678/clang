#include<stdio.h>
main() {
	int ia, ib;
	printf("２つの数値？");
	scanf("%d%d", &ia, &ib);
	printf("*** %d と %d の四則演算 *** \n%d + %d = &d\n %d - %d = %d\n%d * %d = %d\n%d / %d = %dあまり%d"
		, ia, ib, ia, ib, ia + ib, ia, ib, ia - ib, ia, ib, (ia * ib), ia, ib, ia / ib, ia% ib);
}