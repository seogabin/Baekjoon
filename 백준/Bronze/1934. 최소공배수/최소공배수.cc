#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int arr[1000000] = { 0 };

int main() {
	// 최소공배수 = 두수의 곱 / 최대공약수
	int num, a, b, j=2, m = 1, min, c;
	scanf("%d", &num);
	while (num--) {
		scanf("%d %d", &a, &b);
		min = a * b;
		if (a > b) {
			c = a;
		}
		else c = b;
		for (int i = 1; i <= c; i++) {
			if (a % i == 0 && b % i == 0) {
				m = i;
			}
		}
		printf("%d\n", min / m);
	}

}