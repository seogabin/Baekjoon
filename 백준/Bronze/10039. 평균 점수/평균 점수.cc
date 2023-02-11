#include <stdio.h>
#include <algorithm>
#include <stack>
#include <string.h>
#include <iostream>

#define MAX 100

using namespace std;
char arr[10000] = {0};
int brr[10000] = { 0 };
int main() {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] < 40) {
			arr[i] = 40;
		}
		sum += arr[i];
	}
	printf("%d\n", sum / 5);

}

	

