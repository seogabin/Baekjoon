#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>


using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int num = 0, res = 0, count=1;
		int arr[4] = { 0 };
		scanf("%d", &num);
			while (1) {
				if (num == 6174) {
					printf("%d\n", count-1);
					break;
				}
				for (int j = 0; j < 4; j++) {
					arr[j] = 0;
				}
				int i = 0, max[105] = { 0 }, min[105] = { 0 };
				while (num / 10 != 0) {
					arr[i] = num % 10;
					num /= 10;
					i++;
				}
				arr[i] = num % 10;

				for (int j = 0; j < 4; j++) {
					max[j] = arr[j];
					min[j] = arr[j];
				}
				sort(max, max + 4, greater<>());
				sort(min, min + 4);


				int big, small;
				big = max[0] * 1000 + max[1] * 100 + max[2] * 10 + max[3];
				small = min[0] * 1000 + min[1] * 100 + min[2] * 10 + min[3];
				res = big - small;
				int result[105] = { 0 };
				if (res == 6174) {
					printf("%d\n", count);
					break;
				}
				else {
					int k = 0;
					count++;
					while(res/10!=0){
						result[k] = res % 10;
						res /= 10;
						k++;
					}
					result[k] = res % 10;
					sort(result, result + 4, greater<>());
					num = result[0] * 1000 + result[1] * 100 + result[2] * 10 + result[3];
					continue;
				}

			}

	}
}