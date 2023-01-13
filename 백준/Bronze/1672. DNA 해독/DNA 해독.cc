#include <stdio.h>
#include <string.h>

int main() {
	int num;
	char dna[1000005] = { 0 };
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf(" %c", &dna[i]);
	}
	for (int i = num - 1; i >= 1; i--) {
		//an의 경우
		if (dna[i] == 'A') {
			// an-1의 경우
			if (dna[i - 1] == 'A' || dna[i - 1] == 'C') {
				// 값 넣기
				dna[i] = 0;
				dna[i - 1] = 'A';
			}
			else if (dna[i - 1] == 'G') {
				// 값 넣기
				dna[i] = 0;
				dna[i - 1] = 'C';
			}
			else if (dna[i - 1] == 'T') {
				// 값 넣기
				dna[i] = 0;
				dna[i - 1] = 'G';
			}
		}
		else if (dna[i] == 'G') {
			// an-1의 경우
			if (dna[i - 1] == 'A') {
				// 값 넣기
				dna[i] = 0;
				dna[i - 1] = 'C';
			}
			else if (dna[i - 1] == 'G') {
				// 값 넣기
				dna[i] = 0;
				dna[i - 1] = 'G';
			}
			else if (dna[i - 1] == 'C') {
				// 값 넣기
				dna[i] = 0;
				dna[i - 1] = 'T';
			}
			else if (dna[i - 1] == 'T') {
				// 값 넣기
				dna[i] = 0;
				dna[i - 1] = 'A';
			}

		}
		else if (dna[i] == 'C') {
			// an-1의 경우
			if (dna[i - 1] == 'A') {
				// 값 넣기
				dna[i] = 0;
				dna[i - 1] = 'A';
			}
			else if (dna[i - 1] == 'G') {
				// 값 넣기
				dna[i] = 0;
				dna[i - 1] = 'T';
			}
			else if (dna[i - 1] == 'C') {
				// 값 넣기
				dna[i] = 0;
				dna[i - 1] = 'C';
			}
			else if (dna[i - 1] == 'T') {
				// 값 넣기
				dna[i] = 0;
				dna[i - 1] = 'G';
			}

		}
		else if (dna[i] == 'T') {
			// an-1의 경우
			if (dna[i - 1] == 'A') {
				// 값 넣기
				dna[i] = 0;
				dna[i - 1] = 'G';
			}
			else if (dna[i - 1] == 'G') {
				// 값 넣기
				dna[i] = 0;
				dna[i - 1] = 'A';
			}
			else if (dna[i - 1] == 'C') {
				// 값 넣기
				dna[i] = 0;
				dna[i - 1] = 'G';
			}
			else if (dna[i - 1] == 'T') {
				// 값 넣기
				dna[i] = 0;
				dna[i - 1] = 'T';
			}

		}
		//printf("%s\n", dna);
	}
	printf("%c\n", dna[0]);
	return 0;
}