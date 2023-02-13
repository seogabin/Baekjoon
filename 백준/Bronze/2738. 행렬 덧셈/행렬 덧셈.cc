#include <stdio.h>
#include <algorithm>
#include <stack>
#include <string.h>
#include <iostream>

#define MAX 100

using namespace std;

int brr[1000][1000] = { 0 };
int arr[1000][1000] = { 0 };
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			scanf("%d", &brr[i][j]);
		}
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			printf("%d ", arr[i][j] + brr[i][j]);
		}
		printf("\n");
	}

}

	

