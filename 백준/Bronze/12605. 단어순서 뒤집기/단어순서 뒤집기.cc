#include <stdio.h>
#include <algorithm>
#include <stack>
#include <string.h>
#include <iostream>

#define MAX 100

using namespace std;


int main() {
	stack <char> st;
	int num;
	scanf("%d", &num);
	for (int l = 0; l < num; l++) {
		char arr[1000] = { 0 };
		scanf(" %[^\n]s", arr);
		int len = strlen(arr), i=0, cnt=0;

		char* brr[1000] = { NULL, };
		char* ptr = strtok(arr, " ");
		while (ptr != NULL) {
			brr[i] = ptr;
			i++;
			ptr = strtok(NULL, " ");
			cnt++;
		}

		printf("Case #%d: ", l+1);
		for (int j = cnt; j >= 0; j--) {
			if (brr[j] != NULL) {
				printf("%s ", brr[j]);
			}
		}
		printf("\n");

	}

	

	
}
