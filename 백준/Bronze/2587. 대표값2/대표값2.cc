#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

char arr[10] = { 0 };

int main() {
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	int avg = 1, med = 0, sum = 0;

	for (int i = 0; i < 5; i++) {
		sum += arr[i];

	}
	avg = sum / 5;
	sort(arr, arr + 5);
	printf("%d\n%d", avg, arr[2]);
}