#include <stdio.h>

main()
 {
// 	a program to convert temperature from degrees celsius to fahrenheit.
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius= ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;

    printf("The Temperature in Fahrenheit= %.2f\n", fahrenheit);
}