#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
};
void display(struct syohin_data *p);
main() {

	struct syohin_data display3 = { "�P�V�S��",50 };
	struct syohin_data* p;
	display(&display3);
}
void display(struct syohin_data *p) {
	printf("%s %d", p->name, p->tanka);
	return;
}