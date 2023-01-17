#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int num;
	scanf("%d", &num);
	while (num--) {
		int n, sum = 0, a[1000]={0};
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		for (int i = 0; i < n; i++) {
			sum += a[i];
		}
		printf("%d\n", sum);
	}

}