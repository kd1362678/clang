#include<stdio.h>
#define STACKSIZE 8
int stack[STACKSIZE];
int sp = 0;

void display(void);
int push(int d);
int pop(int* pd);

main()
{
	int key, data, result;
	do {

		printf("\n\nプッシュはiポップはo＞");
		key = getche();
		printf("\n");

		if (key == 'i') {
			printf("データ入力＞");
			scanf("%d", &data);
			result = push(data);
			if (result == -1) {
				printf("\n***スタックが一杯です***\n");
			
			}
			else {
				display();
			}
		}
		if (key == 'o') {
			result = pop(&data);
			if (result == -1) {
				printf("\n***スタックが空です***\n");

			}
			else {
				display();
			}
		}
	} while (key != 'e');
}
void display(void) {
	int i;

	printf("\n＝＝＝現在のスタックの内容＝＝＝\n");
	for (i = 0; i < STACKSIZE; i++) {
		printf("stack{%2d}は%5d", stack[i]);
		if (i == sp) {
			printf("＜－ｓｐが示している所（現在ｓｐは%d）", sp);

		}
		printf("\n");
	}
	return;
}

int push(int d) {
	if (stack[sp] >= STACKSIZE) {return -1;}
	stack[sp] = d;
	sp++;
	return 0;

}
int pop(int* pd) {
	if (stack[sp] <= 0) { return -1; }
	stack[sp]--;
	pd = stack[sp];
	stack[sp] = 0;
	return 0;
}