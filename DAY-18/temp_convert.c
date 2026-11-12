#include <stdio.h>

float temp_convert(float celsius);

float temp_convert(float celsius) {
    float far = celsius * (9.0 / 5.0) + 32;
    return far;
}

int main() {
    float far = temp_convert(32);
    printf("far : %f\n", far);
    return 0;
}