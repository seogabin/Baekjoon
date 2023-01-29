#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>


using namespace std;

int main() {
	int bucket[105] = { 0 };
	int n, m, to, from, num;
	scanf("%d %d", &n, &m);
	int tmp = n;
	while (m--) {
		scanf("%d %d %d", &to, &from, &num);
		for (int i = to; i <= from; i++) {
			bucket[i - 1] = num;
		}
	}
	for (int i = 0; i < tmp; i++) {
		printf("%d ", bucket[i]);
	}

}