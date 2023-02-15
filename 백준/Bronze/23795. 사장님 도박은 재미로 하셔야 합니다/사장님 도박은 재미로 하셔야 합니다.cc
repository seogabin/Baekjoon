#include <stdio.h>
#include <algorithm>
#include <stack>
#include <string.h>
#include <iostream>

#define MAX 100

using namespace std;

int arr[10000000] = { 0 };
int main() {
	int a;
	int cnt = 0;
	
	while (1) {
		scanf("%d", &a);
		if (a == -1)
			break;
		cnt += a;
	}
	printf("%d\n", cnt);
	
}

	

