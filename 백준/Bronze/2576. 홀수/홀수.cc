#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>


using namespace std;


int main() {
	
	int arr[105] = { 0 }, brr[105]={0}, idx=0;
	for (int i = 0; i < 7; i++) {
		scanf("%d", &arr[i]);
	}
	int sum = 0, cnt=0;
	for (int i = 0; i < 7; i++) {
		if (arr[i] % 2 == 1) {
			sum += arr[i];
			brr[idx++] = arr[i];
		}
		else cnt++;
	}
	if (cnt == 7) printf("-1\n");
	else {
		printf("%d\n", sum);
		int min = brr[0];
		for (int i = 0; i < idx; i++) {
			if (min > brr[i])
				min = brr[i];
		}
		printf("%d\n", min);
	}
}