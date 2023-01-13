#include <stdio.h>

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	// 월요일
	if (x == 1 || x==10) {
		if (y % 7 == 1)
			printf("MON\n");
		else if (y % 7 == 2)
			printf("TUE\n");
		else if (y % 7 == 3)
			printf("WED\n");
		else if (y % 7 == 4)
			printf("THU\n");
		else if (y % 7 == 5)
			printf("FRI\n");
		else if (y % 7 == 6)
			printf("SAT\n");
		else if (y % 7 == 0)
			printf("SUN\n");
	}
	// 목요일
	else if (x == 2 || x==3 || x==11) {
		if (y % 7 == 1)
			printf("THU\n");	
		else if (y % 7 == 2)
			printf("FRI\n");
		else if (y % 7 == 3)
			printf("SAT\n");
		else if (y % 7 == 4)
			printf("SUN\n");
		else if (y % 7 == 5)
			printf("MON\n");
		else if (y % 7 == 6)
			printf("TUE\n");
		else if (y % 7 == 0)
			printf("WED\n");
	}
	// 일요일
	else if (x == 4 || x == 7) {
		if (y % 7 == 2)
			printf("MON\n");
		else if (y % 7 == 3)
			printf("TUE\n");
		else if (y % 7 == 4)
			printf("WED\n");
		else if (y % 7 == 5)
			printf("THU\n");
		else if (y % 7 == 6)
			printf("FRI\n");
		else if (y % 7 == 0)
			printf("SAT\n");
		else if (y % 7 == 1)
			printf("SUN\n");
	}
	// 화요일
	else if (x == 5) {
		if (y % 7 == 0)
			printf("MON\n");
		else if (y % 7 == 1)
			printf("TUE\n");
		else if (y % 7 == 2)
			printf("WED\n");
		else if (y % 7 == 3)
			printf("THU\n");
		else if (y % 7 == 4)
			printf("FRI\n");
		else if (y % 7 == 5)
			printf("SAT\n");
		else if (y % 7 == 6)
			printf("SUN\n");
	}
	// 금요일
	else if (x == 6) {
		if (y % 7 == 4)
			printf("MON\n");
		else if (y % 7 == 5)
			printf("TUE\n");
		else if (y % 7 == 6)
			printf("WED\n");
		else if (y % 7 == 0)
			printf("THU\n");
		else if (y % 7 == 1)
			printf("FRI\n");
		else if (y % 7 == 2)
			printf("SAT\n");
		else if (y % 7 == 3)
			printf("SUN\n");
	}
	// 수요일
	else if (x == 8) {
		if (y % 7 == 6)
			printf("MON\n");
		else if (y % 7 == 0)
			printf("TUE\n");
		else if (y % 7 == 1)
			printf("WED\n");
		else if (y % 7 == 2)
			printf("THU\n");
		else if (y % 7 == 3)
			printf("FRI\n");
		else if (y % 7 == 4)
			printf("SAT\n");
		else if (y % 7 == 5)
			printf("SUN\n");
	}
	// 토요일
	else if (x == 9 || x == 12) {
		if (y % 7 == 3)
			printf("MON\n");
		else if (y % 7 == 4)
			printf("TUE\n");
		else if (y % 7 == 5)
			printf("WED\n");
		else if (y % 7 == 6)
			printf("THU\n");
		else if (y % 7 == 0)
			printf("FRI\n");
		else if (y % 7 == 1)
			printf("SAT\n");
		else if (y % 7 == 2)
			printf("SUN\n");
	}
}