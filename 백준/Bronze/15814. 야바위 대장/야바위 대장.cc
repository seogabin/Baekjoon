#include <stdio.h>
#include <algorithm>
#include <stack>
#include <string.h>
#include <iostream>

#define MAX 100

using namespace std;

char arr[100000] = { 0 };
int main() {
	scanf("%s", arr);
	int n, a, b;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d", &a, &b);
		char temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}
	printf("%s", arr);
	
}

	

