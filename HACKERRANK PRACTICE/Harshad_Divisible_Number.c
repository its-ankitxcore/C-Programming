#include <stdio.h>

int main() {

    long long n;
    scanf("%lld", &n);

    long long temp = n;  
    long long sum = 0;    

    while (temp > 0) {
        sum = sum + temp % 10;   
        temp = temp / 10;        
    }

    if (n % sum == 0)
        printf("YES\n");
    else
        printf("NO\n");    
    return 0;
}