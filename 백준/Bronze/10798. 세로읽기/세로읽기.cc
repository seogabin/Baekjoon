#include <stdio.h>
#include <algorithm>
#include <stack>
#include <string.h>
#include <iostream>

#define MAX 100

using namespace std;

//char brr[1000] = { 0 };
int idx[100] = { 0 };
int main() {
	char arr[100][100] = { 0 };
	for (int i = 0; i < 5; i++) {
		scanf("%s", &arr[i]);
	}
	for (int i = 0; i < 5; i++) {
		idx[i] = strlen(arr[i]);
	}
	sort(idx, idx + 5, greater<>());
	for (int i = 0; i < idx[0]; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[j][i] == 0) {
				continue;
			}
			else {
				printf("%c", arr[j][i]);
			}
		}
	}

	
}

	

