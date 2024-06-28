#include<stdio.h>
main(int argc, char* argv[])
{
	int sum = 0;
	if (argc >= 3) {
		for (int i = 1; i < argc; i++) {
			sum += atoi(argv[i]);
		}
		printf("%d", sum);
	}
	else {
		return 1;
	}
	return 0;
}