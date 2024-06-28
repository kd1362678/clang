#include<stdio.h>
main() {
	int ia, ib;
	printf("‚Q‚Â‚Ì”’lH");
	scanf("%d%d", &ia, &ib);
	printf("*** %d ‚Æ %d ‚Ìl‘¥‰‰Z *** \n%d + %d = &d\n %d - %d = %d\n%d * %d = %d\n%d / %d = %d‚ ‚Ü‚è%d"
		, ia, ib, ia, ib, ia + ib, ia, ib, ia - ib, ia, ib, (ia * ib), ia, ib, ia / ib, ia% ib);
}