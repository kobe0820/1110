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

	
	printf("��J���ơG");
	scanf("%d", &base);
	printf("��J���ơG");
	scanf("%d", &exponent);

	
	int result = power(base, exponent);
	printf("���G���G%d\n", result);

	return 0;
}

