#include<stdio.h>
main()
{
	int t;
	printf("¼—ï‚ğ“ü—ÍF");
	scanf("%d", &t);
	t = t % 4;
	if (t == 0) {
		printf("‚¤‚é‚¤”N‚Å‚·");
	}
	else {
		printf("‚¤‚é‚¤”N‚Å‚Í‚ ‚è‚Ü‚¹‚ñ");
	}
}