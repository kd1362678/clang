#include<stdio.h>
#include<string.h>
#define DataNum 5
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main() {
	struct profile data[DataNum];
	struct profile *p;
	p = data;
	int i;
	for (i = 0; i < DataNum; i++,p++) {
		printf("%d�l�ځi���O�j�F",i+1);
		scanf("%s", p->name);
		printf("%d�l�ځi���N�����j�F",i+1);
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("%d�l�ځi���t�^�j",i+1);
		scanf("%s", p->blood);
	}
	p = data;
	for (i = 0; i < DataNum; i++, p++) {
		if (strcmp(p->blood,"A") == 0) {
			printf("%s--%d�N %d�� %d���� ���t�^- %s �^\n", p->name,
				p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}

}