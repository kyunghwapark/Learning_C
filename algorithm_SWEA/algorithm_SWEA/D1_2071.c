#include <stdio.h>

int main() {

	int T;		// �� �׽�Ʈ ���̽� ����
	int num;	// �Է¹޴� ���ڸ� �����ϴ� ����
	int sum;	// ��
	int avg;	// ���

	scanf("%d", &T);
	for (int tc = 1; tc <= T; tc++) {
		sum = 0;
		avg = 0;

		for (int i = 0; i < 10; i++) {
			scanf("%d", &num);
			sum += num;
		}

		// �Ҽ��� ù° �ڸ����� �ݿø�
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