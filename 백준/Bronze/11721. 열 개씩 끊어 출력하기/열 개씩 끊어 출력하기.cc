#include <stdio.h>
#include <string.h>

int main() {

	char a[105] = { 0 };
	scanf("%s", a);
	int len = strlen(a);
	for (int i = 0; i < len; i++) {
		if (i > 0 && i % 10 == 0) {
			printf("\n");
			printf("%c", a[i]);
		}
		else {
			printf("%c", a[i]);
		}
	}
	
	
}