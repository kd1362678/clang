#include<stdio.h>
void sisoku(int x, int y, int* wa, int* sa, int* sk, int* syo);
main()
{
	int a, b, c, d, e, f;
	printf("���l�H�F");
	scanf("%d", &a);
	printf("���l�H�F");
	scanf("%d", &b);
	sisoku(a, b, &c, &d, &e, &f);
	puts ("���l�Ɛ��l�̎l�����Z");
	printf("wa = %d sa = %d seki =%d syou = %d\n", c, d, e, f);
}
void sisoku(int x, int y, int* wa, int* sa, int* sk, int* syo) {
	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	*syo = x / y;
	return;
}