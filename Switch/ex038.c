#include<stdio.h>
main()
{
	int num;
	printf("��������́F");
	scanf("%d",& num);
	if (num < 50 && num>9) {

		switch (num / 10) {
		case 1:
			printf("�P�O�_��\n");
			break;
		case 2:
			printf("�Q�O�_��\n");
			break;
		case 3:
			printf("�R�O�_��\n");
			break;
		case 4:
			printf("�S�O�_��\n");
		}
	}
	else {
		printf("1�G���[");
	}

}