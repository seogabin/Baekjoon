#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
	int two = 0, five = 0, cnt=0, sumT=0, sumF=0;
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		int j = i;
		while (j % 2 == 0) {
			two++;
			j /= 2;
		}
		j = i;
		while (j % 5 == 0) {
			five++;
			j /= 5;
		}

	}
	printf("%d\n", two > five ? five : two);

}