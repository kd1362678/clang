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
			printf("�v���C���[�̓O�[�ł�\n\n");
		}
		else {
			if (i == 2) {
				printf("�v���C���[�̓`���L�ł�\n\n");
			}
			else {
				if (i == 3) {
					printf("�v���C���[�̓p�[�ł�\n\n");
				}
				else {
					printf("���̒l�̓G���[�ł�");
					exit(main);
				}
			}
		}
		srand(time(0));
		j = rand() % 3 + 1;
		if (j == 1) {
			printf("�R���s���[�^�[�̓O�[�ł�\n\n");
			switch (i) {
			case 1:
				printf("�������ł�");
				break;

			case 2:
				printf("�v���C���[�̕����ł�");
				break;

			default:
				printf("�v���C���[�̏����ł�");

			}
		}
		else {
			if (j == 2) {
				printf("�R���s���[�^�[�̓`���L�ł�\n\n");
				switch (i) {
				case 1:
					printf("�v���C���[�̏����ł�");
					break;

				case 2:
					printf("�������ł�");
					break;

				default:
					printf("�v���C���[�̕����ł�");

				}
			}
			else {
				printf("�R���s���[�^�[�̓p�[�ł�\n\n");
				switch (i) {
				case 1:
					printf("�v���C���[�̕����ł�");
					break;

				case 2:
					printf("�v���C���[�̏����ł�");
					break;

				default:
					printf("�������ł�");

				}
			}
		}
	}

}