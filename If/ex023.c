#include <stdio.h>
main()
{
	int h, m, s;
	printf("�b������́F");
	scanf("%d", &s);
	if (s > 5000) {
		printf("�T�O�O�O�ȏ�̒l�̓G���[�ł�");
	}
	else {
		if (s < 0) {
			printf("�}�C�i�X�̒l�̓G���[�ł�");
		}
		else {
			h = s / 3600;
			s = s % 3600;
			m = s / 60;
			s = s % 60;
			printf(" %d����%d��%d�b�ł�\n", h, m, s);
		}
	}
}