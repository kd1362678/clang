#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int i, j;
	i = 0;
	j = 0;
	while (i == j) {
		printf("�����o���܂����H\n�i�P�F�O�[�@�Q�F�`���L�@�R�F�p�[�j");
		scanf("%d", &i);
		if (i == 1) {
			printf("\n�v���C���[�̓O�[�ł�\n\n");
		}
		if (i == 2) {
				printf("\n�v���C���[�̓`���L�ł�\n\n");
			}
		if (i == 3) {
				printf("\n�v���C���[�̓p�[�ł�\n\n");
		}
		if(i<1&&i>3){
					printf("\n���̒l�̓G���[�ł�");
					exit(main);
				}
		srand(time(0));
		j = rand() % 3 + 1;
		if (j == 1) {
			printf("�R���s���[�^�[�̓O�[�ł�\n\n");
		}
		if (j == 2) {
			printf("�R���s���[�^�[�̓`���L�ł�\n\n");
		}
		if ( j== 3) {
			printf("�R���s���[�^�[�̓p�[�ł�\n\n");
		}
		if ((i == 1 && j == 1)
			|| (i == 2 && j == 2)
			|| (i == 3 && j == 3)) {

			printf("�������ł�");
		}
		if ((i == 1 && j == 2)
			|| (i == 2 && j == 3)
			|| (i == 3 && j == 1)) {
			printf("�v���C���[�̏����ł�");

		}
		if ((i == 1 && j == 3)
			|| (i == 2 && j == 1)
			|| (i == 3 && j == 2)) {
			printf("�v���C���[�̏����ł�");

		}
	}

}