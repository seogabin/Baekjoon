#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;



int main() {

	int n;
	scanf("%d", &n);
	while (n--) {
		char arr[10000] = { 0 };
		int nb;
		scanf("%d %s", &nb, arr);
		int len = strlen(arr);
		arr[nb - 1] = 0;
		for (int i = 0; i < len; i++) {
			if (arr[i] != 0) {
				printf("%c", arr[i]);
			}
		}
		printf("\n");
	}

}