#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
#include <math.h>
#include <iostream>

using namespace std;

int arr[1000000] = { 0 };
int brr[1000000] = { 0 };

int main() {

	for (int i = 0; i < 3; i++) {
		int z = 0, o = 0;
		for (int i = 0; i < 4; i++) {
			scanf("%d", &arr[i]);
			o += arr[i];
		}
		if (o == 0) printf("D\n");
		else if (o == 1) printf("C\n");
		else if (o == 2) printf("B\n");
		else if (o == 3) printf("A\n");
		else if (o == 4) printf("E\n");
	}
}