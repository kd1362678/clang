#include<stdio.h>
main()
{
	int i;
	char s[100];
	printf("•¶š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%s", s);
	i = 0;
	while(s[i] != '\0'){
		s[i] = s[i] + 1;
		i++;
	}
	printf("%s", s);
}