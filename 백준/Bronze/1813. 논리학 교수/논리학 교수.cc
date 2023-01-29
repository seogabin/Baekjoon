#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>


using namespace std;

int main() {
	int arr[105] = { 0 }, n[105] = { 0 };
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < num; i++) {
		n[arr[i]]++;
	}
	int res = -1, max = 0;
	for (int i = 0; i < 105; i++) {
		if (n[i] == i) {
			res = i;
			if (max < res) max = res;
		}

	}
	printf("%d\n", res);

}