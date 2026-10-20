#include <stdio.h>
float force(float);    //Function prototype (declaration)
float force(float mass){         //Function header (definition ki shuruaat)
    return mass*9.8;             //Return statement (function body ke andar)

}                                //Function definition ka end (closing brace)
int main() {                     //main function header
    int m=45;
    printf("the value of force is %.2f\n",force(m));   //Function call (force(m)) printf ke andar
    
    return 0;
}