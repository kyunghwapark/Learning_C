#include <stdio.h>

int main() {
	int T;		// �� �׽�Ʈ ���̽� ����
	int num;	// �Է¹޴� ���ڸ� �����ϴ� ����
	int max;	// �Է¹��� ���� �� �ִ��� �����ϴ� ����

	scanf("%d", &T);

	for (int tc = 1; tc <= T; tc++) {
		scanf("%d", &max);
		for (int i = 1; i < 10; i++) {
			scanf("%d", &num);
			// �ִ� ���ϱ�
			if (num > max) {
				max = num;
			}
		}
		printf("#%d %d\n", tc, max);
	}
}