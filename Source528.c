#include <stdio.h>

void convertCase(char input) {
	
	if (input >= 'A' && input <= 'Z') {
		
		printf("�ഫ�᪺�r�����G%c\n", input + 32);
	}
	
	else if (input >= 'a' && input <= 'z') {
		
		printf("�ഫ�᪺�r�����G%c\n", input - 32);
	}
	
	else {
		printf("��J���O�r���A�O�����ܡG%c\n", input);
	}
}

int main() {
	char input;

	printf("�п�J�@�ӭ^��r���G");
	scanf("%c", &input);

	convertCase(input);

	return 0;
}
