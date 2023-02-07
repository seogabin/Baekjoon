#include <stdio.h>
#include <algorithm>
#include <stack>
#include <string.h>
#include <iostream>

#define MAX 100

using namespace std;

int main() {

	char arr[105];
	scanf("%s", &arr);

	int len = strlen(arr);
	for (int i = 0; i < len; i++) {
		if (arr[i] >= 'A' && arr[i] <= 'Z') {
			printf("%c", arr[i] + 32);
		}
		else {
			printf("%c", arr[i] - 32);
		}
	}
	

	
}
