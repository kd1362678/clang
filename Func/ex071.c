#include<stdio.h>
int gokei(int i,int j ,int k);
float heikin(int i,int j, int k);
main()
{
	int i, j, k,g;
	float h;
	printf("整数を３つ入力：");
	scanf("%d%d%d", &i, &j, &k);
	printf("合計は%d、平均は%.2f", gokei(i, j, k), heikin(i, j, k));


}
int gokei(int i, int j, int k) {
	int gok;
	gok = i + j + k;
	return(gok);

}
float heikin(int i, int j, int k) {
	float hei;
	hei = (i + j + k) / 3;
	return(hei);

}