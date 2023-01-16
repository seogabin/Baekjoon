#include <stdio.h>
#include <string.h>

int p(int l) {
	int s = 1;
	for (int i = 0; i < l; i++) {
		s *= 16;
		//printf("s: %d\n", s);
	}
	return s;
}
int main() {
	int sum = 0;
	char n[10]={0};
	scanf("%s", &n);
	int len = strlen(n);
	for (int i = 0; i < len; i++) {
		if (n[i] >= 'A' && n[i] <= 'F') {
			//printf("%d\n", n[i] - 55);
			sum += (n[i] - 55) * p(len-i)/16;
		}
		else {
			//printf("%d\n", n[i] - '0');
			sum += (n[i] - '0') * p(len - i)/16;
		}
	}

	printf("%d\n", sum);
}