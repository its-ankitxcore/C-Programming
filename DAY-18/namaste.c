#include <stdio.h>
void namaste();
void bonjour();
void namaste(){
    printf("namaste\n");
}
void bonjour(){
    printf("bonjour\n");
}
int main() {
    int i;
    char ch;
    printf("enter f for french & i for indian : ");
    scanf("%C",&ch);
    if(ch== 'i') printf("namaste");
    else printf("bonjour");
    return 0;
}