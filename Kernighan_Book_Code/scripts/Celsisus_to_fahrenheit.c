#include <stdio.h>

int main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("Celsius Fahrenheit\n");

    while (celsius <= upper) {
        fahr = (celsius * 1.8) + 32;
        printf("%6.2f\t %6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}