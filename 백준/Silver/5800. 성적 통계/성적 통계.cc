#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

int main() {
	int now = 1;
	int num;
	scanf("%d", &num);
	while (num--) {
		int sn, gap;
		scanf("%d", &sn);
		int cn[105] = { 0 };
		for (int i = 0; i < sn; i++) {
			scanf("%d", &cn[i]);
		}
		int max = cn[0], min = cn[0];

		sort(cn, cn + sn);
		min = cn[0];
		max = cn[sn - 1];

		int g[105] = { 0 };
		int idx = 0;

		for (int i = 0; i < sn-1; i++) {
			g[idx++] = abs(cn[i] - cn[i+1]);
		}
		int maxg = g[0];
		for (int i = 0; i < idx; i++) {
			if (maxg < g[i])
				maxg = g[i];
		}
		printf("Class %d\nMax %d, Min %d, Largest gap %d\n", now, max, min, maxg);
		now++;

	}
}