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
			printf("プレイヤーはグーです\n\n");
		}
		else {
			if (i == 2) {
				printf("プレイヤーはチョキです\n\n");
			}
			else {
				if (i == 3) {
					printf("プレイヤーはパーです\n\n");
				}
				else {
					printf("その値はエラーです");
					exit(main);
				}
			}
		}
		srand(time(0));
		j = rand() % 3 + 1;
		if (j == 1) {
			printf("コンピューターはグーです\n\n");
			switch (i) {
			case 1:
				printf("あいこです");
				break;

			case 2:
				printf("プレイヤーの負けです");
				break;

			default:
				printf("プレイヤーの勝ちです");

			}
		}
		else {
			if (j == 2) {
				printf("コンピューターはチョキです\n\n");
				switch (i) {
				case 1:
					printf("プレイヤーの勝ちです");
					break;

				case 2:
					printf("あいこです");
					break;

				default:
					printf("プレイヤーの負けです");

				}
			}
			else {
				printf("コンピューターはパーです\n\n");
				switch (i) {
				case 1:
					printf("プレイヤーの負けです");
					break;

				case 2:
					printf("プレイヤーの勝ちです");
					break;

				default:
					printf("あいこです");

				}
			}
		}
	}

}