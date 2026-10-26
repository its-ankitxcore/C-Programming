#include <stdio.h>

int main() {
    char ch = 'a';
    printf("the character is %c\n", ch);
    printf("the value of character is %d\n",ch);
    if (ch>=97 && ch<=122){
        printf("lowercase value");
    }
    else{
        printf("no");
    }
    
    return 0;
}