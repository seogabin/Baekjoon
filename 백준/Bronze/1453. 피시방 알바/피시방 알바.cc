#include <stdio.h>
#include <algorithm>
#include <stack>
#include <string.h>
#include <iostream>

#define MAX 100

using namespace std;

int arr[10000] = { 0 }, brr[10000]={0};
int main() {
	int num, cnt = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
		if (brr[arr[i]] > 0) {
			cnt++;
		}
		brr[arr[i]]++;
	}
	printf("%d\n", cnt);
}

	

