#include <stdio.h>
#include <string.h>

int main() {
	char a[100] = { 0 }, sum=0;
	scanf("%s", a);
	int len = strlen(a);
	for (int i = 0; i < len; i++) {
		if (a[i] >= 'A' && a[i] <= 'C') {
			sum += 3;
		}
		else if (a[i] >= 'D' && a[i] <= 'F')
			sum += 4;
		else if (a[i] >= 'G' && a[i] <= 'I')
			sum += 5;
		else if (a[i] >= 'J' && a[i] <= 'L')
			sum += 6;
		else if (a[i] >= 'M' && a[i] <= 'O')
			sum += 7;
		else if (a[i] >= 'P' && a[i] <= 'S')
			sum += 8;
		else if (a[i] >= 'T' && a[i] <= 'V')
			sum += 9;
		else if (a[i] >= 'W' && a[i] <= 'Z')
			sum += 10;

	}
	printf("%d\n", sum); // 0
}