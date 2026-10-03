#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
    int maxAnd = 0, maxOr = 0, maxXor = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int a = i & j;
            int o = i | j;
            int x = i ^ j;

            if (a < k && a > maxAnd) maxAnd = a;
            if (o < k && o > maxOr)  maxOr = o;
            if (x < k && x > maxXor) maxXor = x;
        }
    }

    printf("%d\n%d\n%d\n", maxAnd, maxOr, maxXor);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
