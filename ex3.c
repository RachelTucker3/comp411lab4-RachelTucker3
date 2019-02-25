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

	int n = 1;
	int k = 1;
	int q;

	while(n != 0) {

		printf("Enter two integers (for n and k) seperated by space:\n");

		scanf("%d %d", &n, &k);

		if(n != 0) {

			q = NchooseK(n, k);
			printf("%d\n", q);

		}
	}

}

