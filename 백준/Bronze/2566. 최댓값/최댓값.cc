#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
    int a[9][9] = { 0 }, ir=0, jr=0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int max = a[0][0];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                ir = i;
                jr = j;
            }
        }
    }
    printf("%d\n%d %d", max, ir+1, jr+1);

}