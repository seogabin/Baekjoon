#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {

	int num, a, n[100] = {0};
	scanf("%d", &num);
	while (num--) {	
		scanf("%d", &a);
		for (int i = 0; i < 100; i++)
			n[i] = 0;
		while (1) {
			if (a / 10 == 0)
				break;
			n[(a%10)]++;
			a /= 10;
		}
		n[(a % 10)]++;
		int cnt = 0;
		for (int i = 0; i < 10; i++) {
			//printf("%d\n", n[i]);
			if (n[i] > 0) cnt++;
		}
		printf("%d\n", cnt);
	}

}