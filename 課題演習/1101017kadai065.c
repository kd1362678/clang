#include<stdio.h>
main()
{
	int i ,sum, j;
	sum = 0;
	j = -1;
	do {
		printf("�����i�|�X�X�X�j�ŏI���H");
		scanf("%d", &i);
		sum += i;
		j += 1;
	} while (i !=-999);
	sum += 999;
	printf("���v��%d\n���ρ�%f\n", sum, (float)sum / j);
}