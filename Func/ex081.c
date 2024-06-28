#include<stdio.h>
void tbl_minmax(int data[], int* max, int* min);
main(void)
{
	int data[8] = { 6,10,8,2,9,5,1,7 },max = -999,min = 999;
	tbl_minmax(data, &max, &min);
	printf("Å‘å’l= %d\nÅ¬’l=%d\n", max, min);
	return 0;
}
void tbl_minmax(int data[], int* max, int* min) {
	for (int i = 0; i < 8; i++) {
		if (*max < data[i]) {
			*max = data[i];
		}
		if (*min > data[i]) {
			*min = data[i];
		}
	}
	return;
}