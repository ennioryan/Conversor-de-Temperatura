#include <stdio.h>
#include <locale.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

int main() {
    setlocale(LC_ALL, "portuguese");
    float celsius;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    // Conversões
    float fahrenheit = celsiusToFahrenheit(celsius);
    float kelvin = celsiusToKelvin(celsius);

    printf("%.2f graus Celsius é igual a:\n", celsius);
    printf("%.2f graus Fahrenheit\n", fahrenheit);
    printf("%.2f Kelvin\n", kelvin);

    return 0;
}