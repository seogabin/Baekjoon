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
	int p;
	scanf("%d", &p);
		int rest = (m + p) / 60;
		h += rest;
		if (h > 23) {
			h -= (24);
		}
		m = (m + p) % 60;
		printf("%d %d", h, m);

}