#include <stdio.h>

void squarearea(float side);
void circlearea(float rad);
void rectanglearea(float a, float b);

void squarearea(float side) {
    printf("Area of square is %.2f\n", side*side);
}
void circlearea(float rad) {
    printf("Area of circle is %.2f\n", 3.14*rad*rad);
}
void rectanglearea(float a, float b) {
    printf("Area of rectangle is %.2f\n", a*b);
}

int main() {
    float a = 5.0;
    float b = 10.0;
    squarearea(a);
    circlearea(a);
    rectanglearea(a, b);
    return 0;
}