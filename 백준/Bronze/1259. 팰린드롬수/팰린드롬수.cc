#include <stdio.h>
#include <string.h>

int main() {
	char a[1000000] = { -1};
	do {
		int res = 0;
		scanf("%s", a);
		if (a[0] == '0')
			break;
		int len = strlen(a);
		if (len <= 1) {
			res = 1;
		}
		else {
			for (int i = 0; i < len / 2; i++) {
				if (a[i] != a[len - 1 - i]) {
					res = -1;
					break;
				}
				else {
					res = 1;
				}

			}
		}

		if (res == 1) printf("yes\n");
		else printf("no\n");
	} while (a[0] != '0');
}