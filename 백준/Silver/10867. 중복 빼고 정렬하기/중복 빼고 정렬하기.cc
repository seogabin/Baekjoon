#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
#include <iostream>


using namespace std;
using std::vector;
using std::copy;
using std::set_new_handler;
int arr[2000000] = { 0 };
int brr[100000] = { 0 };

int main() {
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}
	
	sort(arr, arr + num);
	brr[0] = arr[0];
	int n = 1;
	for (int i = 0; i < num; i++) {
		if (arr[i] != brr[n - 1]) {
			brr[n++] = arr[i];
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", brr[i]);
	}

}