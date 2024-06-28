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
		printf("%d人目（名前）：",i+1);
		scanf("%s", p->name);
		printf("%d人目（生年月日）：",i+1);
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("%d人目（血液型）",i+1);
		scanf("%s", p->blood);
	}
	p = data;
	for (i = 0; i < DataNum; i++, p++) {
		if (strcmp(p->blood,"A") == 0) {
			printf("%s--%d年 %d月 %d日生 血液型- %s 型\n", p->name,
				p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}

}