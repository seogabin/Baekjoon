#include <stdio.h>
#include <algorithm>
#include <stack>
#include <string.h>
#include <iostream>

#define MAX 100

using namespace std;


int main() {
	int idx[20005] = { 0 };
	int n, arr[20005]={0};
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &idx[i]);
		arr[i] = idx[i];
	}
	sort(arr, arr + n);
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] != idx[i]) {
			cnt++;
		}
	}
	printf("%d\n", cnt);

	
}

	

