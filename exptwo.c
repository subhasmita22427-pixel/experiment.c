#include <stdio.h>

int main() 
{
    float c , f;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (c * 9.0 / 5.0) + 32.0;

    printf("%.2f Celsius = %.2f Fahrenheit\n", c, f);

    return 0;
}
