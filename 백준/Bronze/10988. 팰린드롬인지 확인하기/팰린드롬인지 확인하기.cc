#include <stdio.h>
#include <algorithm>
#include <stack>
#include <string.h>
#include <iostream>

#define MAX 100

using namespace std;

char brr[1000] = { 0 };
char arr[1000] = { 0 };
int main() {
	scanf("%s", arr);

	int len = strlen(arr);
	int idx = 0;
	for (int i = len - 1; i >= 0; i--) {
		brr[idx++] = arr[i];
	}
	int p = 1;
	for (int i = 0; i < len/2; i++) {
		if (arr[i] != brr[i]) {
			p = 0;
			break;
		}
	}
	printf("%d\n", p);

}

	

