#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>


using namespace std;
int num, arr[100]={0};

int main() {

	scanf("%d", &num);

	while (num--) {
		int arr[10] = { 0 };
		for (int i=0; i<10;i++){
			scanf("%d", &arr[i]);
		}

		sort(arr, arr + 10);

		printf("%d\n", arr[7]);
	}
}