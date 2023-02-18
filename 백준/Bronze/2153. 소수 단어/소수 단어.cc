#include <stdio.h>
#include <algorithm>
#include <stack>
#include <string.h>
#include <iostream>

#define MAX 100

using namespace std;

int main() {
	char arr[1000] = { 0 };
	int sum = 0;
	scanf("%s", arr);
	int len = strlen(arr);
	for (int i = 0; i < len; i++) {
		if (arr[i] >= 'A' && arr[i] <= 'Z') {
			sum += arr[i] - 38;
		}
		if (arr[i] >= 'a' && arr[i] <= 'z') {
			sum += arr[i] - 96;
		}
	}
	int cnt = 0;
	for (int i = 2; i < sum; i++) {
		if (sum % i == 0) {
			cnt++;
		}
	}
	if (cnt == 0) {
		printf("It is a prime word.\n");
	}
	else {
		printf("It is not a prime word.\n");
	}
	

}




