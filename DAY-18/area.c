#include <stdio.h>

float squarearea(float side);
float circlearea(float rad);
float rectanglearea(float a, float b);

float squarearea(float side) {
    return side*side;
}

float circlearea(float rad) {
    return 3.14 * rad * rad;
}

float rectanglearea(float a, float b){
   return a*b;
}

int main() {
    float a = 5.0;
    float b = 10.0;

    printf("Area of square is %.2f\n", squarearea(a));
    printf("Area of circle is %.2f\n", circlearea(a));
    printf("Area of rectangle is %.2f\n", rectanglearea(a, b));
    return 0;
}