#include <stdio.h>
#include <algorithm>
#include <stack>
#include <string.h>
#include <iostream>

#define MAX 100

using namespace std;


int main() {
    stack <int> st;
    int num;
    scanf("%d", &num);
    while (num--) {
        int num;
        char ord[1000] = { 0 };
        scanf(" %s", ord);
        int len = strlen(ord), a;
        if (len == 4) {
            if (ord[0] == 'p') {
                scanf("%d", &a);
                st.push(a);
            }
            else if (ord[0] == 's') {
                printf("%d\n", st.size());
            }
        }
        else if (len == 5) {
            if (ord[0] == 'e') {
                if (st.empty() == 1) {
                    printf("%d\n", 1);
                }
                else {
                    printf("%d\n", 0);
                }
            }
        }
        else if (len == 3) {
            if (ord[0] == 'p') {
                if (st.empty() == 1) {
                    printf("%d\n", -1);
                }
                else {
                    int tmp = st.top();
                    printf("%d\n", tmp);
                    st.pop();
                }
            }
            else if (ord[0] == 't') {
                if (st.empty() || st.size()<1) {
                    printf("%d\n", -1);
                }
                else {
                    printf("%d\n", st.top());
                }
            }
        }
        

    }



}