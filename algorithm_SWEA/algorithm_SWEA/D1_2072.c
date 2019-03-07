#include <stdio.h>

int main() {
	int T;
	int num;
	int sum;

	scanf("%d", &T);

	for (int tc = 1; tc <= T; tc++) {
		sum = 0;
		for (int i = 0; i < 10; i++) {
			scanf("%d", &num);
			if (num % 2 != 0) {
				sum += num;
			}
		}
		printf("#%d %d\n", tc, sum);
	}

	return 0;
}