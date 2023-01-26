#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>


using namespace std;
int arr[100]={0}, cnt[100] = {0};

int main() {
	int num;
	scanf("%d", &num);
	while (num--) {
		double sum = 0, avg = 1;
		int n;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}
		for (int i = 0; i < n; i++) {
			sum += arr[i];
		}

		//printf("sum: %lf\n", sum);
		int count = 0;
		avg = sum / n;
		//printf("avg: %lf\n", avg);
		for (int i = 0; i < n; i++) {
			if (arr[i] > avg) {
				count++;
			}
		}
		printf("%.3lf%%\n", (double)count / n * 100);
	}
	

}