#include <stdio.h>

int NchooseK (int x, int y) {

	if(y == 0) {
		return 1;
	}else if (x == y) {
 		return 1;
	}else {
		return NchooseK(x-1, y-1) + NchooseK(x-1, y);
	}

}

void main() {

	int n = 1;
	int k = 1;

	while(n != 0 && k != 0) {

		scanf("%d %d", &n, &k);

		if(n != 0 && k != 0) {

			int q = NchooseK(n, k);

			printf("%d\n", q);

		}
	}

}

