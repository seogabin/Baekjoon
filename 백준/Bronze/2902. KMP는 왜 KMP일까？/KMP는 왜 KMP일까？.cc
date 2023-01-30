#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

char arr[105] = { 0 };

int main() {
	scanf("%s", arr);
	int len = strlen(arr);
	for (int i = 0; i < len; i++) {
		if (arr[i] < 97 && arr[i]>=65) {
			printf("%c", arr[i]);
		}
	}
}