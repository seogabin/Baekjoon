#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>


using namespace std;
int arr[10000] = { 0 };
double brr[10000] = {0}, idx = 0;

int main() {
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (int i = 0; i < num; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	double avg = 1, sum = 0;

	for (int i = 0; i < num; i++) {
		brr[i] = (double)arr[i] / max * 100;
		//printf("brr: %lf\n", brr[i]);
		sum += brr[i];
	}
	//printf("sum: %lf\n", sum);

	printf("%lf", (double)sum / num);
	


}