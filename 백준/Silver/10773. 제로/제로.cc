#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack <int> s;
	int num, k, sum=0;
	scanf("%d", &num);
	while (num--) {
		int i = 0;
		scanf("%d", &k);
		if (k == 0) {
			s.pop();
		}
		else {
			s.push(k);
		}

	}
	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}
	printf("%d\n", sum);
}