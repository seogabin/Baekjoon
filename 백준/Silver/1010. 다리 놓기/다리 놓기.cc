#include <stdio.h>
#include <algorithm>
#include <stack>
#include <string.h>
#include <iostream>

#define MAX 100

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		long long int a, b;
		scanf("%lld %lld", &a, &b);
		long long int c=1;
		
		for (int i = 1; i <= a; i++) {
			c =  c*b / i;
			b--;
		}
		printf("%lld\n", c);
	}
	
}

	

