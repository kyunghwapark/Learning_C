#include <stdio.h>

int main() {
	int T;		// 총 테스트 케이스 개수
	int num;	// 입력받는 숫자를 저장하는 변수
	int max;	// 입력받은 숫자 중 최댓값을 저장하는 변수

	scanf("%d", &T);

	for (int tc = 1; tc <= T; tc++) {
		scanf("%d", &max);
		for (int i = 1; i < 10; i++) {
			scanf("%d", &num);
			// 최댓값 구하기
			if (num > max) {
				max = num;
			}
		}
		printf("#%d %d\n", tc, max);
	}
}