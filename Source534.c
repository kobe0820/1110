#include <stdio.h>


int power(int base, int exponent) {

	if (exponent == 1) {
		return base;
	}
	else {
		
		return base * power(base, exponent - 1);
	}
}

int main() {
	int base, exponent;

	
	printf("輸入底數：");
	scanf("%d", &base);
	printf("輸入指數：");
	scanf("%d", &exponent);

	
	int result = power(base, exponent);
	printf("結果為：%d\n", result);

	return 0;
}

