#include <stdio.h>
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... series
int fib(int n);         // prototype

int fib(int n)     // function header
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);   //function khud ko do baar call karta hai, (recursion)
}

int main() {
    int n;
    printf("enter n=");
    scanf("%d", &n);

    if (n < 0) {
        printf("n negative nahi ho sakta\n");
        return 1;
    }

    printf("the %dth element of fibonacci series is %d\n", n, fib(n));
    return 0;
}