#include <stdio.h>

int main() {

	int T;
	int num1;
	int num2;

	scanf("%d", &T);
	for (int tc = 1; tc <= T; tc++) {
		scanf("%d %d", &num1, &num2);

		printf("#%d", tc);
		if (num1 > num2) {
			printf(" >");
		}
		else if (num1 == num2) {
			printf(" =");
		}
		else {
			printf(" <");
		}
		printf("\n");
	}
	return 0;
}