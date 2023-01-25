#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>

using namespace std;

int arr[1000000] = { 0 };

int main() {
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {

		scanf("%d", &arr[i]);
	}
	sort(arr, arr + num);
	for (int i = 0; i < num; i++)
		printf("%d\n", arr[i]);
}