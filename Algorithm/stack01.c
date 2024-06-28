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

		printf("\n\n�v�b�V����i�|�b�v��o��");
		key = getche();
		printf("\n");

		if (key == 'i') {
			printf("�f�[�^���́�");
			scanf("%d", &data);
			result = push(data);
			if (result == -1) {
				printf("\n***�X�^�b�N����t�ł�***\n");
			
			}
			else {
				display();
			}
		}
		if (key == 'o') {
			result = pop(&data);
			if (result == -1) {
				printf("\n***�X�^�b�N����ł�***\n");

			}
			else {
				display();
			}
		}
	} while (key != 'e');
}
void display(void) {
	int i;

	printf("\n���������݂̃X�^�b�N�̓��e������\n");
	for (i = 0; i < STACKSIZE; i++) {
		printf("stack{%2d}��%5d", stack[i]);
		if (i == sp) {
			printf("���|�����������Ă��鏊�i���݂�����%d�j", sp);

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