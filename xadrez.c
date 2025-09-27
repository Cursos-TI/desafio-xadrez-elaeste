/**
 *Desafio: Nível Intermediario - Movimentando Peças acrescentando o Cavalo(com 3 Loops).
 *
 * Este programa permite que o usuário escolha uma peça e simule seu movimento.
 * Cada peça utiliza uma estrutura de repetição diferente para demonstrar
 * as várias formas de se resolver o mesmo problema.
 *
 * - Torre: Utiliza a estrutura 'for'.
 * - Bispo: Utiliza a estrutura 'while'.
 * - Rainha: Utiliza a estrutura 'do-while'.
 * - Cavalo: Utiliza a estrutura 'loop aninhado 'While e For''.
 */
#include <stdio.h>

int main()
{
    int pecaEscolhida;
    int numeroDePassos;
    int direcao;

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
    printf("4. Cavalo\n");
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
        printf("Quantas casas deseja mover? ");
        scanf("%d", &numeroDePassos);

        printf("\nREGRAS DA TORRE: Move-se em linhas retas.\n");
        printf("Escolha a direcao: 1.Cima | 2.Baixo | 3.Direita | 4.Esquerda\n");
        printf("Sua escolha: ");
        scanf("%d", &direcao);

        printf("\n--- Movimentando a Torre (usando 'for') por %d casas ---\n", numeroDePassos);

        // O loop 'for' é ideal quando o número de iterações é conhecido.
        for (int i = 0; i < numeroDePassos; i++)
        {
            switch (direcao)
            {
            case 1:
                printf("Cima\n");
                break;
            case 2:
                printf("Baixo\n");
                break;
            case 3:
                printf("Direita\n");
                break;
            case 4:
                printf("Esquerda\n");
                break;
            default:
                printf("Direcao invalida!\n");
                i = numeroDePassos; // Força a saída do loop
                break;
            }
        }
        break;

    // =================================================================
    // CASO 2: LÓGICA DO BISPO (com loop 'while')
    // =================================================================
    case 2:
        printf("Voce escolheu o BISPO.\n");
        printf("Quantas casas deseja mover? ");
        scanf("%d", &numeroDePassos);

        printf("\nREGRAS DO BISPO: Move-se nas diagonais.\n");
        printf("Escolha a direcao: 1.Cima-Dir | 2.Cima-Esq | 3.Baixo-Dir | 4.Baixo-Esq\n");
        printf("Sua escolha: ");
        scanf("%d", &direcao);

        printf("\n--- Movimentando o Bispo (usando 'while') por %d casas ---\n", numeroDePassos);

        int i = 0; // 1. Variável de controle é inicializada ANTES do loop.
        while (i < numeroDePassos)
        { // 2. A condição é verificada ANTES de cada iteração.

            switch (direcao)
            {
            case 1:
                printf("Cima, Direita\n");
                break;
            case 2:
                printf("Cima, Esquerda\n");
                break;
            case 3:
                printf("Baixo, Direita\n");
                break;
            case 4:
                printf("Baixo, Esquerda\n");
                break;
            default:
                printf("Direcao invalida!\n");
                i = numeroDePassos; // Força a saída do loop
                break;
            }
            i++; // 3. O incremento é feito manualmente DENTRO do loop.
        }
        break;

    // =================================================================
    // CASO 3: LÓGICA DA RAINHA (com loop 'do-while')
    // =================================================================
    case 3:
        printf("Voce escolheu a RAINHA.\n");
        printf("Quantas casas deseja mover? ");
        scanf("%d", &numeroDePassos);

        printf("\nREGRAS DA RAINHA: Move-se em qualquer direcao.\n");
        printf("Escolha a direcao:\n");
        printf("1.Cima | 2.Baixo | 3.Direita | 4.Esquerda\n");
        printf("5.Cima-Dir | 6.Cima-Esq | 7.Baixo-Dir | 8.Baixo-Esq\n");
        printf("Sua escolha: ");
        scanf("%d", &direcao);

        printf("\n--- Movimentando a Rainha (usando 'do-while') por %d casas ---\n", numeroDePassos);

        // Verifica se deve executar, pois o do-while executa pelo menos uma vez.
        if (numeroDePassos > 0)
        {
            int j = 0; // 1. Variável de controle inicializada ANTES do loop.
            do
            {
                // 2. O bloco de código é executado PELO MENOS UMA VEZ.
                switch (direcao)
                {
                case 1:
                    printf("Cima\n");
                    break;
                case 2:
                    printf("Baixo\n");
                    break;
                case 3:
                    printf("Direita\n");
                    break;
                case 4:
                    printf("Esquerda\n");
                    break;
                case 5:
                    printf("Cima, Direita\n");
                    break;
                case 6:
                    printf("Cima, Esquerda\n");
                    break;
                case 7:
                    printf("Baixo, Direita\n");
                    break;
                case 8:
                    printf("Baixo, Esquerda\n");
                    break;
                default:
                    printf("Direcao invalida!\n");
                    j = numeroDePassos; // Força a saída do loop
                    break;
                }
                j++; // 3. O incremento é feito manualmente DENTRO do loop.
            } while (j < numeroDePassos); // 4. A condição é verificada no FINAL da iteração.
        }
        break;
    // =================================================================
    // CASO 4: LÓGICA DO CAVALO (com loop aninhado)
    // =================================================================
    case 4:
        printf("Voce escolheu o CAVALO.\n");
        printf("\nREGRAS DO CAVALO: Move-se em 'L' (duas casas em uma direcao e uma para o lado).\n");
        printf("Este movimento e uma acao unica. Escolha qual 'L' deseja fazer:\n");
        printf("--- Movimentos Verticais ---\n");
        printf("1. Duas para Cima, uma para Direita\n");
        printf("2. Duas para Cima, uma para Esquerda\n");
        printf("3. Duas para Baixo, uma para Direita\n");
        printf("4. Duas para Baixo, uma para Esquerda\n");
        printf("--- Movimentos Horizontais ---\n");
        printf("5. Duas para Direita, uma para Cima\n");
        printf("6. Duas para Direita, uma para Baixo\n");
        printf("7. Duas para Esquerda, uma para Cima\n");
        printf("8. Duas para Esquerda, uma para Baixo\n");
        printf("Sua escolha: ");
        scanf("%d", &direcao);

        printf("\n--- Decompondo o movimento do Cavalo em 'L' ---\n");

        // Esta flag garante que a sequencia de passos para o movimento em 'L'
        // seja executada apenas uma vez, como em uma jogada real.
        int movimentoCompleto = 1;

        switch (direcao)
        {
        case 1: // 2 Cima, 1 Direita
            while (movimentoCompleto--)
            {
                for (int k = 0; k < 2; k++)
                {
                    printf("Cima\n");
                }
                printf("Direita\n");
            }
            break;
        case 2: // 2 Cima, 1 Esquerda
            while (movimentoCompleto--)
            {
                for (int k = 0; k < 2; k++)
                {
                    printf("Cima\n");
                }
                printf("Esquerda\n");
            }
            break;
        case 3: // 2 Baixo, 1 Direita
            while (movimentoCompleto--)
            {
                for (int k = 0; k < 2; k++)
                {
                    printf("Baixo\n");
                }
                printf("Direita\n");
            }
            break;
        case 4: // 2 Baixo, 1 Esquerda
            while (movimentoCompleto--)
            {
                for (int k = 0; k < 2; k++)
                {
                    printf("Baixo\n");
                }
                printf("Esquerda\n");
            }
            break;
        case 5: // 2 Direita, 1 Cima
            while (movimentoCompleto--)
            {
                for (int k = 0; k < 2; k++)
                {
                    printf("Direita\n");
                }
                printf("Cima\n");
            }
            break;
        case 6: // 2 Direita, 1 Baixo
            while (movimentoCompleto--)
            {
                for (int k = 0; k < 2; k++)
                {
                    printf("Direita\n");
                }
                printf("Baixo\n");
            }
            break;
        case 7: // 2 Esquerda, 1 Cima
            while (movimentoCompleto--)
            {
                for (int k = 0; k < 2; k++)
                {
                    printf("Esquerda\n");
                }
                printf("Cima\n");
            }
            break;
        case 8: // 2 Esquerda, 1 Baixo
            while (movimentoCompleto--)
            {
                for (int k = 0; k < 2; k++)
                {
                    printf("Esquerda\n");
                }
                printf("Baixo\n");
            }
            break;
        default:
            printf("Movimento invalido para o Cavalo!\n");
            break;
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