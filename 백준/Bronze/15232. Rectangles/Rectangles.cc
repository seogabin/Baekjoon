#include <stdio.h>
#include <algorithm>
#include <stack>
#include <string.h>
#include <iostream>

#define MAX 100

using namespace std;

int arr[10000000] = { 0 };
int main() {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			printf("*");
		}
		printf("\n");
	}
	
}

	

