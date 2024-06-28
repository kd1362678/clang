#include<stdio.h>
main()
{
	int en, d ,di;
	printf("‰‰Zq‚ğ“ü—ÍF");
	scanf("%d", &en);
	printf("2‚Â‚Ì®”‚ğ“ü—ÍF");
	scanf("%d%d", &d, &di);
	if (en <= 2) {
		if (en == 1) {
			d = d + di;
		}
		else {
			d = d - di;
		}
	}
	else {
		if (en == 3){
			d = d * di;
		}
		else {
			d = d / di;
		}
	}
	printf("%d", d);
}