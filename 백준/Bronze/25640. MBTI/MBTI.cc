#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
	char jinho[105] = { 0 }, mbti[105]={0};
	scanf("%s", jinho);
	int n, cnt=0, res=-1;
	scanf("%d", &n);
	while (n--) {
		scanf("%s", mbti);

		for (int i = 0; i < 4; i++) {
			if (mbti[i] != jinho[i]) {
				res = 0;
				break;
			}
			else res = 1;
		}
		if (res == 1)
			cnt++;
	}
	printf("%d\n", cnt);

}