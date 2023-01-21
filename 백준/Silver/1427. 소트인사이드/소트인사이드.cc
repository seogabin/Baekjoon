#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(int i, int j) {
	return j < i;
}

int main() {
	int n;
	int a[100] = { 0 };
	scanf("%d", &n);
	
	int temp = n, len=0;
	while (temp / 10 != 0) {
		len++;
		temp /= 10;
	}
	len++;

	temp = n;
	for (int i = 0; i < len; i++) {
		a[i] = temp % 10;
		temp /= 10;
	}

	sort(a, a + len, compare);

	for (int i = 0; i < len; i++) {
		printf("%d", a[i]);
	}


}