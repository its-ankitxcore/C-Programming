#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    if (n <= 1) {
        printf("NO\n");
        return 0;
    }

    long long sum = 1;  // 1 divides every n > 1

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }

    if (sum == n)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}