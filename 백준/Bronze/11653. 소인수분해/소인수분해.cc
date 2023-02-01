#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;


int main() {
	int a, b, i=2;
	scanf("%d", &a);
	while (a != 1) {
		if (a % i == 0) {
			printf("%d\n", i);
			a /= i;
		}
		else {
			i++;
		}

	}

}