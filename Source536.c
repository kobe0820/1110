#include <stdio.h>

void hanoi(int n, char source, char auxiliary, char target) {
	// 基本情況：如果只有一個盤子，將它從源柱移到目標柱
	if (n == 1) {
		printf("將盤子1從%c移動到%c\n", source, target);
		return;
	}

	// 將 n-1 個盤子從源柱移到輔助柱，目標柱作為輔助柱
	hanoi(n - 1, source, target, auxiliary);

	// 將剩餘的一個盤子從源柱移到目標柱
	printf("將盤子%d從%c移動到%c\n", n, source, target);

	// 將 n-1 個盤子從輔助柱移到目標柱，源柱作為輔助柱
	hanoi(n - 1, auxiliary, source, target);
}

int main() {
	int numDisks;

	// 讀取用戶輸入的盤子數量
	printf("請輸入盤子數量：");
	scanf("%d", &numDisks);

	// 呼叫遞迴函數解決漢諾塔問題
	hanoi(numDisks, 'A', 'B', 'C');

	return 0;
}
