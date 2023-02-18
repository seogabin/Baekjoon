#include <stdio.h>
#include <algorithm>
#include <stack>
#include <string.h>
#include <iostream>

#define MAX 100

using namespace std;

int main() {
	char arr[1000] = { 0 };
	int a, b;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		getchar();
		scanf("%[^\n]s", arr);
		printf("%d. %s\n", i, arr);
		
	}
	return 0;

}




