#include <stdio.h>
#include <algorithm>
#include <stack>
#include <string.h>
#include <iostream>

#define MAX 100

using namespace std;


int main() {
	int h, m;
	scanf("%d %d", &h, &m);
	if (m<45) {
		h -= 1;
		m += 15;
		if (h < 0) {
			h = 23;
		}
		printf("%d %d\n", h, m);
	}
	else {
		printf("%d %d\n", h, m - 45);
	}

}