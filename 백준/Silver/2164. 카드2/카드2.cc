#include <stdio.h>
#include <string.h>
#include <iostream>
#include <queue>

using namespace std;
queue <int> q;

int main() {
	int num;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		q.push(i);
	}
	int o = q.front();
	while (q.size()!=1) {
		q.pop();
		int o = q.front();
		q.push(o);
		q.pop();
	}

	printf("%d\n", q.front());

}