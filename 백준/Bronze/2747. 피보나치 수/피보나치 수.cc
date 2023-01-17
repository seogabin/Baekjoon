#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {

	int n;
	scanf("%d", &n);
	int sum = 0, z = 0, o = 1, i = 0, temp, sumb;
	if (n == 0) {
		printf("%d\n", 0);
	}
	else if (n == 1) {
		printf("%d\n", 1);
	}
	else {
		while (n--) { // 1
			if (i == 0) {
				sum = z; // 0
				i++;
			}
			else if (i == 1) {
				sum = o; // 0+1
				sumb = o; // 1
				temp = o;
				i++;
			}
			else {
				sum = sumb + temp; // 1 + 1
				sumb = sum - sumb; // 2
				temp = sum;
				i++;
				//printf("sum:%d, sumb:%d, temp:%d\n", sum,sumb,temp);
			}

		}
		printf("%d\n", sum);
	}

}