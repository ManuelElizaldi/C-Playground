#include <stdio.h>
// oC=(5/9)(oF-32)
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */
int main (){
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while (fahr <= upper){
        celsius = 5 * (fahr-32)/9;
        printf("Fahrenheit:%d\t Celsius:%d\n", fahr, celsius);
        fahr = fahr + step;
    }

}