#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <iostream>

using namespace std;

int arr[10000000] = { 0 };

int main() {

	int arr[100] = { 0 }, brr[100] = { 0 };
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++) {
		scanf("%d", &brr[i]);
	}
	sort(arr, arr + 10, greater<>());
	sort(brr, brr + 10, greater<>());

	int suma = arr[0] + arr[1] + arr[2];
	int sumb = brr[0] + brr[1] + brr[2];
	printf("%d %d", suma, sumb);
}