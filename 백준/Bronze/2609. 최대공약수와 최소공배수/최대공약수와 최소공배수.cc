#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int arr[100000] = { 0 };

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int min, max;
	for (int i = 1, j = 1; i <= a && j <= b; i++, j++) {
		if (a % i == 0 && b % j == 0) {
			min = i;
		}
	}
	printf("%d\n", min);
	max = a*b/min;
	printf("%d\n", max);
}