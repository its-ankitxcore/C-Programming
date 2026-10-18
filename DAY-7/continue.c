#include<stdio.h>
int main() {
    for(int i=0; i<8; i++){
        if (i==5){
            continue; // skip this itteration now
        }
        printf("%d \n",i);
}

    return 0;
}

