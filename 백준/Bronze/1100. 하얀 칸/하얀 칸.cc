#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
#include <iostream>

char arr[10][10] = { 0 };

int main() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			scanf(" %c", &arr[i][j]);
		}
	}

	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			// 흰검흰검흰검
			if (i % 2 == 0) {
				if (j % 2 == 0 && arr[i][j] == 'F') {
					
					cnt++;
				}
				else continue;
			}
			// 검흰검흰검흰
			else if (i%2 == 1) {
				if (j % 2 == 1 && arr[i][j] == 'F') {
					cnt++;
					
				}
			}
		}
	}
	printf("%d\n", cnt);

}