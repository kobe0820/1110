#include <stdio.h>

void hanoi(int n, char source, char auxiliary, char target) {
	// �򥻱��p�G�p�G�u���@�ӽL�l�A�N���q���W����ؼЬW
	if (n == 1) {
		printf("�N�L�l1�q%c���ʨ�%c\n", source, target);
		return;
	}

	// �N n-1 �ӽL�l�q���W���컲�U�W�A�ؼЬW�@�����U�W
	hanoi(n - 1, source, target, auxiliary);

	// �N�Ѿl���@�ӽL�l�q���W����ؼЬW
	printf("�N�L�l%d�q%c���ʨ�%c\n", n, source, target);

	// �N n-1 �ӽL�l�q���U�W����ؼЬW�A���W�@�����U�W
	hanoi(n - 1, auxiliary, source, target);
}

int main() {
	int numDisks;

	// Ū���Τ��J���L�l�ƶq
	printf("�п�J�L�l�ƶq�G");
	scanf("%d", &numDisks);

	// �I�s���j��ƸѨM�~�ն���D
	hanoi(numDisks, 'A', 'B', 'C');

	return 0;
}
