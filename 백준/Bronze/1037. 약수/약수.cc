#include <stdio.h>
#include <algorithm>
#include <stack>
#include <string.h>
#include <iostream>

#define MAX 100

using namespace std;
int arr[100000] = { 0 };
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", & arr[i]);
	}
	int min = arr[0], max = arr[0];
	for (int i = 0; i < n; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("%d\n", min * max);
	
	
}

	

