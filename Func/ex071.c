#include<stdio.h>
int gokei(int i,int j ,int k);
float heikin(int i,int j, int k);
main()
{
	int i, j, k,g;
	float h;
	printf("®”‚ğ‚R‚Â“ü—ÍF");
	scanf("%d%d%d", &i, &j, &k);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f", gokei(i, j, k), heikin(i, j, k));


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