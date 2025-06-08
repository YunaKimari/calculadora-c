#include <stdio.h>

float soma(float a, float b){
    return a + b;
}
float subtrai(float a, float b){
    return a - b;
}
float multiplica(float a, float b){
    return a * b;
}
float divide(float a, float b){
    if (b == 0){
        printf("Erro: divisão por zero!\n");
        return 0;
    }
    return a / b;
}

int main(){
    float num1, num2, resultado;
    char operacao;
    char continuar;

    do {
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);

        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        printf("Escolha a operação (+, -, *, /): ");
        scanf(" %c", &operacao);

        switch(operacao){
            case '+':
                resultado = soma(num1, num2);
                break;
            case '-':
                resultado = subtrai(num1, num2);
                break;
            case '*':
                resultado = multiplica(num1, num2);
                break;
            case '/':
                resultado = divide(num1, num2);
                break;
            default:
                printf("Operação inválida!\n");
                continue;
        }

        printf("Resultado: %.2f\n", resultado);

        printf("Deseja realizar outra operação? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    printf("Encerrando calculadora.\n");
    return 0;
}