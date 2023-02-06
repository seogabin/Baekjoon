#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <iostream>

using namespace std;

int arr[10000000] = { 0 };

int main() {

	int num;
	scanf("%d", &num);
	while (num--) {
		int n, m, zero=0, idx=0;
		scanf("%d %d", &n, &m);
		int i;
		for (int i = n; i <= m; i++) {
			int j = i;
			if (i == 0) {
				zero++;
				continue;
			}
			else {
				while (j/10!=0) {
					if (j % 10 == 0) {
						zero++;
					}
					j /= 10;
				}
			}
		}
		printf("%d\n", zero);
	}


}