#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>


using namespace std;
char name[105] = { 0 };

int main() {

	int a[10] = { 0 }, b[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++) {
		scanf("%d", &b[i]);
	}
	int acnt = 0, bcnt = 0;
	for (int i = 0; i < 10; i++) {
		if (a[i] > b[i]) acnt++;
		else if (a[i] < b[i]) bcnt++;
		else continue;
	}
	if (acnt > bcnt) printf("A\n");
	else if (acnt < bcnt) printf("B\n");
	else printf("D\n");
	
}