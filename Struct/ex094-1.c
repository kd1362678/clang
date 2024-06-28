#include<stdio.h>
#include<string.h>
#define DataNum 5
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day d_data;
	char blood[5];
};

main() {
	struct profile data[DataNum] = { 
		{"rika",2000,1,1,"A"},
		{"aika",2001,2,3,"A"},
		{"jin",2008,2,8,"O"},
		{"naoki",1992,8,6,"B"},
		{"rui",2007,2,28,"AB"}};
	struct profile *p;
	p = data;
	int i;
	for (i = 0; i < DataNum; i++,p++) {
		if (p->d_data.tuki == 2) {
			printf("%s--%d”N %dŒŽ %d“ú¶ ŒŒ‰tŒ^- %s Œ^\n", p->name,
				p->d_data.nen,p->d_data.tuki,p->d_data.hi, p->blood);
		}
	}

}