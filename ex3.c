#include <stdio.h>

int NchooseK (int x, int y) {

	if(y == 0) {
		return 1;
	}else if (x == y) {
 		return 1;
	}else {
		int r = (NchooseK(x-1, y-1) + NchooseK(x-1, y));
		return r;
	}

}

void main() {

	int n;
	int k;
	int q;


	printf("Enter two integers (for n and k) seperated by space:\n");

	scanf("%i %i", &n, &k);

	if (n == 0 && k == 0) {
		printf("%d\n", 1);
	} else {
		q = NchooseK(n, k);
		printf("%d\n", q);
		main();
	}


}

