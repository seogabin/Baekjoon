#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
#include <math.h>
#include <iostream>

using namespace std;

int arr[1000000] = { 0 };
int brr[1000000] = { 0 };

int main() {
	int a, b, idx=0;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			arr[idx++] = i;
		}
	}
	sort(arr, arr + idx);

	printf("%d\n", arr[b - 1]);

}