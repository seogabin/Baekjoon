#include <stdio.h>
#include <algorithm>
#include <stack>
#include <string.h>
#include <iostream>

#define MAX 100

using namespace std;


int main() {
	int a, b, i=0;
	scanf("%d", &a);
	scanf("%d", &b);
	int arr[1000] = { 0 };
	while (b / 10 != 0) {
		arr[i] = b % 10;
		b /= 10;
		i++;
	}
	arr[i] = b % 10;

	int sum = 0;
	int k = 1;
	for (int j = 0; j <= i; j++) {
		printf("%d\n", arr[j] * a);
		int tmp = arr[j] * a * k;
		sum += tmp;
		k *= 10;
	}
	printf("%d\n", sum);

}