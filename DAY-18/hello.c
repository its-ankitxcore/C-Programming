#include <stdio.h>
void printhello();                 //prototype
void printgoodbye();               //prototype
void hello(){                
    printf("hello\n");
}
void goodbye(){
    printf("good bye");
}
int main() {
    printhello();                   //function call
    printgoodbye();                 //function call
    return 0;
}