#include <stdio.h>
#include <math.h>

/*
コンパイル用コマンド
sudo apt install gcc
gcc -o basic_calc  basic_calc.c -lm
./basic_calc
*/

void basical_calculation(float num1, float num2) {
    printf("a + b = %f\n", num1 + num2);
    printf("a - b = %f\n", num1 - num2);
    printf("a * b = %f\n", num1 * num2);
    printf("a / b = %f\n", num1 / num2);
    printf("a ** 2 = %f\n", powf(num1, 2.0));
    printf("a ** 0.5 = %f\n", sqrt(num1));
}

void main() {
    float num1 = 2.0;
    float num2 = 3.0;
    basical_calculation(num1, num2);
}