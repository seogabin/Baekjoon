#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int gcd(int x, int y) {
	if (y == 0) return x;
	return gcd(y, x % y);
}

int main() {
	int a, b, n, min;
	scanf("%d", &n);
	while (n--) {
		int num;
		long long int sum = 0;
		int arr[100000] = { 0 };
		scanf("%d", &num);
		for (int i = 0; i < num; i++) {
			scanf("%d", &arr[i]);
		}
		for (int i = 0; i < num-1; i++) {
			for (int j = i+1; j < num; j++) {
				sum += gcd(arr[i], arr[j]);
			}
		}
		printf("%lld\n", sum);
	}
}