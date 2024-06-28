#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int i, j;
	i = 0;
	j = 0;
	while (i == j) {
		printf("何を出しますか？\n（１：グー　２：チョキ　３：パー）");
		scanf("%d", &i);
		if (i == 1) {
			printf("\nプレイヤーはグーです\n\n");
		}
		if (i == 2) {
				printf("\nプレイヤーはチョキです\n\n");
			}
		if (i == 3) {
				printf("\nプレイヤーはパーです\n\n");
		}
		if(i<1&&i>3){
					printf("\nその値はエラーです");
					exit(main);
				}
		srand(time(0));
		j = rand() % 3 + 1;
		if (j == 1) {
			printf("コンピューターはグーです\n\n");
		}
		if (j == 2) {
			printf("コンピューターはチョキです\n\n");
		}
		if ( j== 3) {
			printf("コンピューターはパーです\n\n");
		}
		if ((i == 1 && j == 1)
			|| (i == 2 && j == 2)
			|| (i == 3 && j == 3)) {

			printf("あいこです");
		}
		if ((i == 1 && j == 2)
			|| (i == 2 && j == 3)
			|| (i == 3 && j == 1)) {
			printf("プレイヤーの勝ちです");

		}
		if ((i == 1 && j == 3)
			|| (i == 2 && j == 1)
			|| (i == 3 && j == 2)) {
			printf("プレイヤーの勝ちです");

		}
	}

}