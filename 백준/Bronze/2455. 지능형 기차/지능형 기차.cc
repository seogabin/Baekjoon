#include <stdio.h>
#include <string.h>


int main() {
	
	int bye, hi, sum=0, max, z, s, cnt=0;
	scanf("%d %d", &z, &s);
	while(1) {
		scanf("%d %d", &bye, &hi);
		if (cnt == 0) {
			sum = 0;
			sum = s - z + hi - bye;
			if (sum == 0)
				break;
			max = sum;
			cnt++;
		}
		else {
			sum = sum + hi - bye;
			if (sum == 0)
				break;
			if (max < sum)
				max = sum;
			hi = s;
			bye = z;
		}
	
	}
	printf("%d\n", max);
	
}