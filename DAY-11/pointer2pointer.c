#include <stdio.h>                                     

int main() {                                            // program yahan se shuru hota hai
    int i=5;                                            // int variable i banaya, usme 5 rakha
    int*j=&i;                                           // pointer j banaya, usme i ka address rakha
    int**k=&j;                                          // pointer-to-pointer k banaya, usme j ka address rakha
    printf("the address of i is %d\n",&i);              // i ka address print karta hai
    printf("the value of i is %d\n",*j);                // *j = j ke address par jao, wahan 5 hai, to 5 print
    printf("the value of i is %d\n",**k);               // *k = j, aur **k = *j = 5, to 5 print
    return 0;                                           
}                                                       