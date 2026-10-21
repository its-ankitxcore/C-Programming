#include <stdio.h>

void change_to_ten_times();
void change_to_ten_times(int *a){
    *a = *a * 10;
}


int main() {
    int a=20;
    printf("the value of a is %d\n",a);
    change_to_ten_times(&a);
    printf("the value of a is %d\n",a);

    return 0;
}