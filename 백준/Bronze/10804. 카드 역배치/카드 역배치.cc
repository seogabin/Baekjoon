#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>


using namespace std;
char arr[500000][30] = {0};

int main() {

	int arr[20] = { 0 };
	for (int i = 1; i <= 20; i++) {
		arr[i - 1] = i;
	}
	int a, b;
	for (int i = 0; i < 10; i++) {
		scanf("%d %d", &a, &b);
		int tmp, brr[20] = {0}, idx=0;
		for (int j = b - 1; j >= a - 1; j--) {
			brr[idx++] = arr[j];
		}
		for (int i = a; i <= b; i++) {
			arr[i-1] = brr[i-a];
		}
	}

	for (int i = 0; i < 20; i++) {
		printf("%d ", arr[i]);
	}
}