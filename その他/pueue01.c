#include<stdio.h>
#define QUEUESIZE 8
int queue[QUEUESIZE];
int head = 0;
int tail = 0;

void display(void);
int enqueue(int d);
int dequeue(int* pd);

main()
{
	int key, data, result;

	do {
		printf("i queue  o dequeue");
		key = getche();
		printf("\n");

		if (key == 'i') {
			printf("nyu?");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1) {
				printf("\nqueue kara\n");
			}
			else {
				printf("queue ����f�[�^�����o���܂�\n", data);
				display();
			}

		}

	} while (key != 'e');

}

void display(void) {
	int i;

	printf("\n���݂̃L���[�̓��e\n");
	for (i = 0; i < QUEUESIZE; i++) {
		printf("queue[%2d]��%5d",i,queue[i]);
		if (i == head) {
			printf("head�������Ă��鏊(����head��%d", head);
		}
		if (i == tail) {
			printf("tail�������Ă��鏊�i����tail��%d�j", tail);
		}
		printf("\n");
	}

}
int enqueue(int d)
{
	if ((tail+1)%QUEUESIZE == head) { return -1; }
	queue[tail] = d;
	tail++;
	tail = tail % QUEUESIZE;
	return 0;
}
int dequeue(int* pd)
{	
	
	if (head == tail) { return -1; }
	*pd = queue[head];
	queue[head] = 0;
	head++;
	head = head % QUEUESIZE;
	return 0;
}