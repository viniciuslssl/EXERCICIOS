#include <stdio.h>

int main() {
    int N;

   
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

  
    if (N < 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
    } else {
        
        for (int i = 0; i <= N; i++) {
            printf("%d\n", i);
        }
    }

    return 0;
}


#include <stdio.h>

int main() {
    int N;

    printf("Digite um número inteiro N: ");
    scanf("%d", &N);

    for (int i = 1; N > 0; i += 2, N--) {
        printf("%d\n", i);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int count = 0;
    int num = 3;

    while (count < 5) {
        if (num % 3 == 0) {
            printf("%d\n", num);
            count++;
        }
        num++;
    }

    return 0;
}
#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 2; i <= 100; i += 2) {
        sum += i;
    }

    printf("A soma dos 50 primeiros números pares é: %d\n", sum);

    return 0;
}
#include <stdio.h>

int main() {
    int opcao;
    float valorTotal = 0;

    do {
        printf("Menu de frutas:\n");
        printf("1 => ABACAXI – 5,00 a unidade\n");
        printf("2 => MAÇA – 1,00 a unidade\n");
        printf("3 => PERA – 4,00 a unidade\n");
        printf("0 => Sair\n");

        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            valorTotal += 5.0;
        } else if (opcao == 2) {
            valorTotal += 1.0;
        } else if (opcao == 3) {
            valorTotal += 4.0;
        } else if (opcao != 0) {
            printf("Opção inválida.\n");
        }

    } while (opcao != 0);

    printf("Valor total da compra: %.2f\n", valorTotal);

    return 0;
}
#include <stdio.h>

int main() {
    char sexo, olhos, cabelos;
    int idade;
    float salario;
    int mulheresCastanhasCastanhas = 0;
    int totalHabitantes = 0;

    while (1) {
        printf("Digite o sexo (m/f): ");
        scanf(" %c", &sexo);
        if (sexo == 'm' || sexo == 'f') {
            printf("Digite a cor dos olhos (a/v/c/p): ");
            scanf(" %c", &olhos);
            if (olhos == 'a' || olhos == 'v' || olhos == 'c' || olhos == 'p') {
                printf("Digite a cor dos cabelos (l/c/p/r): ");
                scanf(" %c", &cabelos);
                if (cabelos == 'l' || cabelos == 'c' || cabelos == 'p' || cabelos == 'r') {
                    printf("Digite a idade (10-100): ");
                    scanf("%d", &idade);
                    if (idade >= 10 && idade <= 100) {
                        printf("Digite o salário: ");
                        scanf("%f", &salario);
                        if (salario >= 0) {
                            totalHabitantes++;
                            if (sexo == 'f' && idade >= 18 && idade <= 35 && olhos == 'c' && cabelos == 'c') {
                                mulheresCastanhasCastanhas++;
                            }
                        }
                    }
                }
            }
        }
        if (idade == -1) {
            break;
        }
    }

    float porcentagemMulheresCastanhasCastanhas = (float)mulheresCastanhasCastanhas / totalHabitantes * 100.0;
    printf("Porcentagem de mulheres com idade entre 18 e 35 anos, olhos castanhos e cabelos castanhos: %.2f%%\n", porcentagemMulheresCastanhasCastanhas);

    return 0;
}