#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
	int num, i = 0, cnt = 0, plus = 1, a[105]={0};
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < num; i++) {
		if (a[i] == 1) {
			cnt += plus;
			plus++;
		}
		else if (a[i] == 0) {
			plus = 1;
			continue;
		}
	}
	printf("%d\n", cnt);


}