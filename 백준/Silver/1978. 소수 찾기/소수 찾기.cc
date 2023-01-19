#include <stdio.h>
#include <string.h>

int main() {
	int num, n, rst=0;
	scanf("%d", &num);
	while (num--) {
		int cnt = 0;
		scanf("%d", &n);
		for (int i = 1; i <= n; i++) {
			if (n % i == 0)
				cnt++;
		}
		if (cnt == 2)
			rst++;
	}
	printf("%d\n", rst);
}