#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
#include <iostream>


using namespace std;

char arr[105] = { 0 };

int main() {
	scanf("%s", arr);
    int len = strlen(arr), cnt= len;
    for (int i = 0; i < len; i++) { 

        if (arr[i] == 'c' || arr[i] == 's' || arr[i] == 'z') { 
            if (arr[i + 1] == '-' || arr[i + 1] == '=') 
                cnt--;  
        }
        else if (arr[i] == 'n' || arr[i] == 'l') { 
            if (arr[i + 1] == 'j') 
                cnt--; 
        }
        else if (arr[i] == 'd') { 
            if (arr[i + 1] == '-') 
                cnt--;  
            else if (arr[i + 1] == 'z' && arr[i + 2] == '=') 
                cnt--;
        }
    }

    printf("%d\n", cnt);

    return 0;


}