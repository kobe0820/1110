#include <stdio.h>

unsigned long long int fibonacci(unsigned int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		unsigned long long int a = 0;
		unsigned long long int b = 1;
		unsigned long long int result = 0;
		for (unsigned int i = 2; i <= n; ++i) {
			result = a + b;
			a = b;
			b = result;
		}
		return result;
	}
}

int main() {
	unsigned int n;

	
	printf("�п�Jn�ȡG");
	scanf("%u", &n);

	
	unsigned long long int result = fibonacci(n);
	printf("��%u�Ӵ��i�����Ƭ��G%llu\n", n, result);

	return 0;
}
