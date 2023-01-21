#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>


using namespace std;


int main() {

	int a[5000005] = { 0 };
	int n, k;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	sort(a, a + n);
	printf("%d\n", a[k-1]);
}