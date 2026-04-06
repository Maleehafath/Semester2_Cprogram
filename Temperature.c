#include <stdio.h>
int main()
{
    double celsius, fahrenheit;
    printf("Enter temperature in Celsius:\n");
    scanf("%lf", &celsius);
    fahrenheit = (9 * celsius / 5) + 32;
    printf("Temperature in Fahrenheit = %.2lf\n", fahrenheit);
    return 0;
}
