#include <stdio.h>

int n;
int k;

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


	while(n != 0 && k != 0) {

		scanf("%d %d\n", &n, &k);

		if(n != 0 && k != 0) {

			printf("%d", NchooseK(n, k));

		}
	}

}
