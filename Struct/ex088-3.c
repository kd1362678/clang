#include<stdio.h>
typedef struct {
	char name[20];
	int tanka;

}syohin_data;

main()
{
	syohin_data syohin1, syohin2;
	strcpy(syohin1.name, "ƒGƒ“ƒsƒc");
	syohin1.tanka = 30;
	syohin2 = syohin1;
	printf("syohin1.name = %s\n", syohin1.name);
	printf("syohin1.tanka = %d\n", syohin1.tanka);
	printf("syohin2.name = %s\n", syohin2.name);
	printf("syohin2.name = %d\n", syohin2.tanka);
}