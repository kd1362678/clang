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
				printf("queue からデータを取り出しまし\n", data);
				display();
			}

		}

	} while (key != 'e');

}

void display(void) {
	int i;

	printf("\n現在のキューの内容\n");
	for (i = 0; i < QUEUESIZE; i++) {
		printf("queue[%2d]は%5d",i,queue[i]);
		if (i == head) {
			printf("headが示している所(現在headは%d", head);
		}
		if (i == tail) {
			printf("tailが示している所（現在tailは%d）", tail);
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