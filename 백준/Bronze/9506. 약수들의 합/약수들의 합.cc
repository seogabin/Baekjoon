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
	int a;
	do {
		scanf("%d", &a);

		if (a == -1) 
			break;
		else {
			int idx = 0, sum = 0;

			for (int i = 1; i < a; i++) {
				if (a % i == 0) {
					arr[idx++] = i;
					sum += i;
				}
			}
			sort(arr, arr + idx);

			if (a == sum) {
				printf("%d = ", a);
				for (int i = 0; i < idx - 1; i++) {
					printf("%d + ", arr[i]);
				}
				printf("%d\n", arr[idx - 1]);
			}
			else {
				printf("%d is NOT perfect.\n", a);
			}
		}
	} while (a != -1);
}