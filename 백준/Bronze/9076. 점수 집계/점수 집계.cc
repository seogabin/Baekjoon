#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <iostream>

using namespace std;



int main() {

	int num;
	scanf("%d", &num);
	while (num--) {
		int arr[100] = { 0 }, sum=0;
		for (int i = 0; i < 5; i++) {
			scanf("%d", &arr[i]);
			sum += arr[i];
		}
		int min = arr[0], max = arr[0];
		for (int i = 0; i < 5; i++) {
			if (arr[i] < min) {
				min = arr[i];
			}
			if (arr[i] > max) {
				max = arr[i];
			}
		}
		sort(arr, arr + 5);
		if (arr[3] - arr[1] >= 4) {
			printf("KIN\n");
		}
		else {
			printf("%d\n", sum - max - min);
		}
	}


}