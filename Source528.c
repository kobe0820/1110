#include <stdio.h>

void convertCase(char input) {
	
	if (input >= 'A' && input <= 'Z') {
		
		printf("轉換後的字母為：%c\n", input + 32);
	}
	
	else if (input >= 'a' && input <= 'z') {
		
		printf("轉換後的字母為：%c\n", input - 32);
	}
	
	else {
		printf("輸入不是字母，保持不變：%c\n", input);
	}
}

int main() {
	char input;

	printf("請輸入一個英文字母：");
	scanf("%c", &input);

	convertCase(input);

	return 0;
}
