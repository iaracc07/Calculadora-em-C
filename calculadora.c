#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <string.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double n1, n2;
    int opcao, retorno;
    char yesnot;

    do{
    printf("===============================\n");
    printf("    Calculadora Simples\n");
    printf("===============================\n");
    printf("Selecione uma operação:\n");
    printf("1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\n");
    printf("Opção:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite o primeiro número: \n");
        scanf("%lf", &n1);
        printf("Digite o segundo número: \n");
        scanf("%lf", &n2);
        printf("Resultado: %.2lf + %.2lf = %.2lf\n", n1, n2, n1 + n2);
        break;
    case 2:
        printf("Digite o primeiro número: \n");
        scanf("%lf", &n1);
        printf("Digite o segundo número: \n");
        scanf("%lf", &n2);
        printf("Resultado: %.2lf - %.2lf = %.2lf\n", n1, n2, n1 - n2);
        break;
    
    case 3:
        printf("Digite o primeiro número: \n");
        scanf("%lf", &n1);
        printf("Digite o segundo número: \n");
        scanf("%lf", &n2);
        printf("Resultado: %.2lf * %.2lf = %.2lf\n", n1, n2, n1 * n2);
        break;

    case 4:
        printf("Digite o primeiro número: \n");
        scanf("%lf", &n1);
        printf("Digite o segundo número: \n");
        scanf("%lf", &n2);
        if(n2 == 0){
            printf("Erro: Divisão por zero não é permitida.\n");
            break;
        }
        printf("Resultado: %.2lf / %.2lf = %.2lf\n\n", n1, n2, n1 / n2);
        break;
    
    case 5:
        printf("Obrigado por usar a calculadora! Até a próxima.\n");
        break;

    default:
        printf("Opção inválida! Digite um número entre 1 e 5.\n");
        break;
    }
        do{
            printf("Deseja realizar outra operação? (s/n):\n");
            scanf(" %c", &yesnot);
        
            if(yesnot != 's' && yesnot != 'S' && yesnot != 'n' && yesnot != 'N'){
                printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
            }}
        while(yesnot != 's' && yesnot != 'S' && yesnot != 'n' && yesnot != 'N'); // se tem resposta válida
    }

while(yesnot == 's' || yesnot == 'S'); // se a calculadora volta ao mennu
    printf("Obrigado por usar a calculadora! Até a próxima.\n");

    return 0;
}