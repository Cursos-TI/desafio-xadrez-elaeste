#include <stdio.h>

/*
* Desafio de Xadrez - MateCheck
* Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
* O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
* Este programa permite que o usuário escolha uma peça e simule seu movimento.
 * Cada peça utiliza uma estrutura de repetição diferente para demonstrar
 * as várias formas de se resolver o mesmo problema.
 *
 * - Torre: Utiliza a estrutura 'for'.
 * - Bispo: Utiliza a estrutura 'while'.
 * - Rainha: Utiliza a estrutura 'do-while'.*/

int main() {

    int pecaEscolhida;

    // =================================================================
    // MENU PRINCIPAL - ESCOLHA DA PEÇA
    // =================================================================
    printf("=======================================\n");
    printf("  SIMULADOR DE MOVIMENTOS DE XADREZ\n");
    printf("=======================================\n");
    printf("Escolha a peca para movimentar:\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("Digite o numero da sua escolha: ");
    scanf("%d", &pecaEscolhida);
    printf("---------------------------------------\n");

    switch (pecaEscolhida)
    {
    // =================================================================
    // CASO 1: LÓGICA DA TORRE (com loop 'for')
    // =================================================================
    case 1:
        printf("Voce escolheu a TORRE.\n");
        
        // O loop 'for' é ideal quando o número de iterações é conhecido.
        for(int i = 1; i <= 5; i++){
            printf("direita\n");
        }
        break;

    // =================================================================
    // CASO 2: LÓGICA DO BISPO (com loop 'while')
    // =================================================================
    case 2:
        printf("Voce escolheu o BISPO.\n");

        int i = 0; // 1. Variável de controle é inicializada ANTES do loop.
        while (i < 5) // 2. A condição é verificada ANTES de cada iteração.
        {            
            printf("Cima, Direita\n");
            i++; // 3. O incremento é feito manualmente DENTRO do loop.
        }
        break;

    // =================================================================
    // CASO 3: LÓGICA DA RAINHA (com loop 'do-while')
    // =================================================================
    case 3:
        printf("Voce escolheu a RAINHA.\n");
        int r = 8;//variavel com total de movimentos da rainha

        // Verifica se deve executar, pois o do-while executa pelo menos uma vez.
        if (r > 0) {
            int j = 0; // 1. Variável de controle inicializada ANTES do loop.
            do
            {
                printf("Esquerda\n");
                
                j++; // 3. O incremento é feito manualmente DENTRO do loop.
            } while (j < r); // 4. A condição é verificada no FINAL da iteração.
        }
        break;

    // =================================================================
    // CASO PADRÃO: ESCOLHA INVÁLIDA
    // =================================================================
    default:
        printf("Opcao invalida! Por favor, escolha um numero entre 1 e 3.\n");
        break;
    }

    printf("---------------------------------------\n");
    printf("Programa finalizado.\n");

    return 0;
}
