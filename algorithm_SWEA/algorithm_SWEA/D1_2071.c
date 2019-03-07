#include <stdio.h>

int main() {

	int T;		// 총 테스트 케이스 개수
	int num;	// 입력받는 숫자를 저장하는 변수
	int sum;	// 합
	int avg;	// 평균

	scanf("%d", &T);
	for (int tc = 1; tc <= T; tc++) {
		sum = 0;
		avg = 0;

		for (int i = 0; i < 10; i++) {
			scanf("%d", &num);
			sum += num;
		}

		// 소수점 첫째 자리에서 반올림
		if (sum % 10 >= 5) {
			avg = sum / 10 + 1;
		}
		else {
			avg = sum / 10;
		}

		printf("#%d %d\n", tc, avg);
	}

	return 0;
}