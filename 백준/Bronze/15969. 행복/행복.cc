#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int arr[100000] = { 0 };

int main() {
	int num, a, b, j=2, m = 1, min, c;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	min = arr[0];

	for (int i = 0; i < num; i++) {
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}

	printf("%d\n", max - min);
}