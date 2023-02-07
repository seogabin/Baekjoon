#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <iostream>

#define MAX 100

using namespace std;

int main() {

	char arr[200005] = { 0 };
	char ans[20] = { 0 };
	scanf("%s", arr);
	scanf("%s", ans);

	int arlen = strlen(arr);
	int anslen = strlen(ans);
	int cnt = 0, idx=0;
	for (int i = 0; i < arlen; i++) {
		if (arr[i] == ans[idx]) {
			int temp = i;
			int count = 0;
			for (int j = 0; j < anslen; j++) {
				if (arr[temp] == ans[j]) {
					count++;
					temp++;
				}
			}
			if (count == anslen) {
				cnt++;
			}
		}
	}
	printf("%d\n", cnt);

	
}
