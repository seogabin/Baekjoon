#include <stdio.h>
#include <algorithm>
#include <stack>
#include <string.h>
#include <iostream>

#define MAX 100

using namespace std;

int arr[10000] = { 0 }, brr[10000]={0};
int main() {
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld\n", abs(a - b));
}

	

