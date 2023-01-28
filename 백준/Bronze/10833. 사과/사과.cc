#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>


using namespace std;
char name[105] = { 0 };

int main() {

	int num, apple, student, cnt=0;
	scanf("%d", &num);
	while (num--) {
		scanf("%d %d", &student, &apple);
		if (apple % student == 0) 
			cnt+= 0;
		else {
			cnt += apple % student;
		}

	}
	printf("%d\n", cnt);

	

	
}