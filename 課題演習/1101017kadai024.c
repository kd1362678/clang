#include<stdio.h>
main() {
	int ia, ib;
	printf("�Q�̐��l�H");
	scanf("%d%d", &ia, &ib);
	printf("*** %d �� %d �̎l�����Z *** \n%d + %d = &d\n %d - %d = %d\n%d * %d = %d\n%d / %d = %d���܂�%d"
		, ia, ib, ia, ib, ia + ib, ia, ib, ia - ib, ia, ib, (ia * ib), ia, ib, ia / ib, ia% ib);
}