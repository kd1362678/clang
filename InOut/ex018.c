#include<stdio.h>
main()
{
	int i ,ni, sa, sum;
	float ave;

	printf("������3���́F"); scanf("%d%d%d", &i, & ni, &sa);
	sum = i + ni + sa;
	ave = (float)sum / 3;
	printf("���v��%d \t ����=%.2f\n", sum, ave);
}