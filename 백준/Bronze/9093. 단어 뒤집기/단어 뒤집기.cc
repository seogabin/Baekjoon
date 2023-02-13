#include <stdio.h>
#include <algorithm>
#include <stack>
#include <string.h>
#include <iostream>

#define MAX 100

using namespace std;

char brr[1000] = { 0 };

int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		char arr[1000] = { 0 };
		scanf(" %[^\n]s", arr);
		int len = strlen(arr);
		int cnt = 0, count=0;
		for (int i = 0; i < len; i++) {
			if (arr[i] == ' ') {
				if (count == 0) {
					int tmp = i;
					for (int j = tmp - 1; j >= cnt; j--) {
						printf("%c", arr[j]);

					}
					cnt = tmp;
					printf(" ");
					count++;
				}
				else {
					int tmp = i;
					for (int j = tmp - 1; j >= cnt; j--) {
						printf("%c", arr[j]);

					}
					cnt = tmp;
				}
				
			}
			if (i == len - 1) {
				for (int j = i; j >= cnt; j--) {
					printf("%c", arr[j]);
				}
			}
		}
		printf("\n");
	}

}

	

