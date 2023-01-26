#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>


using namespace std;
int arr[100000]={0}, brr[100000] = {0}, idx = 0;

int main() {
	int m, n, sum=0;
	scanf("%d", &m);
	scanf("%d", &n);

	for (int i = m; i <= n; i++) {
		int count = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				count++;
			}
		}
		if (count == 2) {
			arr[idx++] = i;
		}
	}

	for (int i = 0; i < idx; i++) {
		sum += arr[i];
	}
	if (arr[0] == 0) printf("-1\n");
	else
		printf("%d\n%d", sum, arr[0]);
}