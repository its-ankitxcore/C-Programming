#include <stdio.h>
float c2f( float c);  //function prototype or declaration

float c2f( float c)       // function defination 
{
    return (9.0/5.0)*c+32.0;

}
int main() {
    float c=45;
    printf("C to F for %f is %.2f\n",c,c2f(c));
    return 0;
}