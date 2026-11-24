#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int temp = n;      
    int found = 0;      

    while (temp > 0) {
        if (temp % 10 == 0) { 
            found = 1;
        }
        temp = temp / 10;        
    }

    if (found == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}