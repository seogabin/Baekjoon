#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>


using namespace std;
int n, arr[250005] = {}, res = 0;

int main() {

	scanf("%d", &n);

	for (int i = 1; i <= 500; i++) {
		arr[i * i] = 1;
	}

	for (int i = 1; i <= 500; i++) {
		if (i * i - n > 0 && arr[i * i - n] == 1)
			res++;
	}

	printf("%d\n", res);
	return 0;
}