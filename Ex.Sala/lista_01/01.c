// 01) Converte uma temperatura de Celsius para Fahrenheit.

// Biblioteca para entrada e saída de dados.
#include <stdio.h>

int main()
{
    // Armazena a temperatura em Celsius.
    float numero;

    // Armazena a temperatura convertida.
    float fahrenheit;

    // Solicita e lê a temperatura em Celsius.
    printf("Digite o número para ser convertido: ");
    scanf("%f", &numero);

    // Converte Celsius para Fahrenheit.
    fahrenheit = numero * (9.0 / 5.0) + 32;

    // Exibe o resultado da conversão.
    printf("O numero convertido é: %2.f\n", fahrenheit);

}