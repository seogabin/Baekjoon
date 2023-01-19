#include <stdio.h>
#include <string.h>

int main() {
	int num;
	scanf("%d", &num);

	// 가로줄은 num 개수만큼
	// 5*num만큼 가로 세로 출력

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num*5; j++) {
			printf("@");
		}
		printf("\n");
	}

	for (int i = 0; i < num * 5 - num; i++) {
		for (int j = 0; j < num; j++) {
			printf("@");
		}
		printf("\n");
	}
}