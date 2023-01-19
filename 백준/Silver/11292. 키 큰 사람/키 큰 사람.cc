#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	
	int num;

	do {
		char name[100][100] = { 0 };
		double height[100] = { 0 };
		scanf("%d", &num);
		for (int i = 0; i < num; i++) {
			scanf("%s %lf", name[i], &height[i]);
		}

		double height_copy[100] = { 0 };

		for (int i = 0; i < num; i++) {
			height_copy[i] = height[i];
		}

		sort(height_copy, height_copy+num);

		double max = height_copy[num-1];
		for (int i = 0; i < num; i++) {
			if (max == height[i]) {
				//printf("max: %lf\n", max);
				printf("%s ", name[i]);
			}
		}
		printf("\n");
	} while (num != 0);
}