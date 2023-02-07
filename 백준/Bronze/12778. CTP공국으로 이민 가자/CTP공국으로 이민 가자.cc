#include <stdio.h>
#include <algorithm>
#include <stack>
#include <string.h>
#include <iostream>

#define MAX 100

using namespace std;

int main() {

	int num;
	scanf("%d", &num);
	while (num--) {
		int n, arr[1000]={0};
		char alpha, brr[1000]={0};
		scanf("%d %c", &n, &alpha);
		if (alpha == 'C') {
			for (int i = 0; i < n; i++) {
				scanf(" %c", &brr[i]);
				printf("%d ", brr[i] - 64);
			}
			printf("\n");
		}
		else if (alpha == 'N') {
			for (int i = 0; i < n; i++) {
				scanf("%d", &arr[i]);
				printf("%c ", arr[i] + 64);
			}
			printf("\n");
		}
	}


	
}
