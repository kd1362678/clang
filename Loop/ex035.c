#include<stdio.h>
main()
{
	int i ,sum;
	sum = 0;
	do{
		printf("�������āF");
		scanf("%d", &i);
		if (i == -999) break;
		sum += i;
	} while (1);
	printf("���v��%d", sum);
}
