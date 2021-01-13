#include <stdio.h>

int main() {
    int n = 16;
    for (int i = 1, num = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j, ++num) {
            if (j + i == n + 1) printf("%d ", num);
        }
    }
}
9 8 7
6 5 4
3 2 1