#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i,j;
	char s[21];
	printf("���������́F");
	scanf("%s", s);
	i = 0;
	while (s[i] != '\0') {
		printf("s[%d]�̈Í����L�[�F",i);
		scanf("%d", &j);
		s[i] = s[i] - j;
		i++;
	}
	printf("�Í����ςݕ�����́F%s", s);

}