#include <stdio.h>

/*
 * Desafio: Nível Mestre - Criando Movimentos Complexos (com Recursividade)
 *
 * Este programa foi refatorado para utilizar funções recursivas no lugar de loops simples
 * para os movimentos da Torre, Bispo e Rainha, atendendo aos requisitos avançados.
 * A interatividade e a lógica do Cavalo com loops complexos foram mantidas.
 */

// =================================================================
// DECLARAÇÃO DAS FUNÇÕES RECURSIVAS (PROTÓTIPOS)
// =================================================================
void moverTorreRecursiva(int passos, int direcao);
void moverBispoRecursiva(int passos, int direcao);
void moverRainhaRecursiva(int passos, int direcao);

// =================================================================
// DEFINIÇÃO DAS FUNÇÕES RECURSIVAS
// =================================================================

/**
 * @brief Move a Torre, chamando a si mesma até que os passos acabem.
 * @param passos O número de passos restantes.
 * @param direcao A direção do movimento (1-4).
 */
void moverTorreRecursiva(int passos, int direcao)
{
    // Caso Base: A condição de parada. Se não há mais passos, a função retorna.
    if (passos <= 0)
    {
        return;
    }

    // Ação
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
        return; // Para a recursão se a direção for inválida
    }

    // Passo Recursivo: A função chama a si mesma com um passo a menos.
    moverTorreRecursiva(passos - 1, direcao);
}

/**
 * @brief Move o Bispo recursivamente.
 */
void moverBispoRecursiva(int passos, int direcao)
{
    // Caso Base:
    if (passos <= 0)
    {
        return;
    }

    // Ação
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
        return;
    }

    // Passo Recursivo:
    moverBispoRecursiva(passos - 1, direcao);
}

/**
 * @brief Move a Rainha recursivamente.
 */
void moverRainhaRecursiva(int passos, int direcao)
{
    // Caso Base:
    if (passos <= 0)
    {
        return;
    }

    // Ação
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
        return;
    }

    // Passo Recursivo:
    moverRainhaRecursiva(passos - 1, direcao);
}

// =================================================================
// FUNÇÃO PRINCIPAL
// =================================================================
int main()
{
    int pecaEscolhida;
    int numeroDePassos;
    int direcao;

    // --- MENU PRINCIPAL ---
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
    // CASO 1: LÓGICA DA TORRE (com Recursividade)
    // =================================================================
    case 1:
        printf("Voce escolheu a TORRE.\n");
        printf("Quantas casas deseja mover? ");
        scanf("%d", &numeroDePassos);

        printf("\nREGRAS DA TORRE: Move-se em linhas retas.\n");
        printf("Escolha a direcao: 1.Cima | 2.Baixo | 3.Direita | 4.Esquerda\n");
        printf("Sua escolha: ");
        scanf("%d", &direcao);

        printf("\n--- Movimentando a Torre por %d casas ---\n", numeroDePassos);
        moverTorreRecursiva(numeroDePassos, direcao);
        break;

    // =================================================================
    // CASO 2: LÓGICA DO BISPO (com Recursividade e Loops Aninhados)
    // =================================================================
    case 2:
        printf("Voce escolheu o BISPO.\n");
        printf("Quantas casas deseja mover? ");
        scanf("%d", &numeroDePassos);

        printf("\nREGRAS DO BISPO: Move-se nas diagonais.\n");
        printf("Escolha a direcao: 1.Cima-Dir | 2.Cima-Esq | 3.Baixo-Dir | 4.Baixo-Esq\n");
        printf("Sua escolha: ");
        scanf("%d", &direcao);

        // Requisito 1: Implementação com Recursividade
        printf("\n--- Movimentando o Bispo por %d casas ---\n", numeroDePassos);
        moverBispoRecursiva(numeroDePassos, direcao);

        // Requisito 2: Demonstração com Loops Aninhados
        printf("\n--- Demonstracao do Bispo com LOOPS ANINHADOS ---\n");
        for (int v_step = 0; v_step < numeroDePassos; v_step++)
        { // Loop externo (vertical)
            for (int h_step = 0; h_step < 1; h_step++)
            { // Loop interno (horizontal)
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
                }
            }
        }
        break;

    // =================================================================
    // CASO 3: LÓGICA DA RAINHA (com Recursividade)
    // =================================================================
    case 3:
        printf("Voce escolheu a RAINHA.\n");
        printf("Quantas casas deseja mover? ");
        scanf("%d", &numeroDePassos);

        printf("\nREGRAS DA RAINHA: Move-se em qualquer direcao.\n");
        printf("Escolha a direcao:\n1.Cima | 2.Baixo | 3.Direita | 4.Esquerda\n5.Cima-Dir | 6.Cima-Esq | 7.Baixo-Dir | 8.Baixo-Esq\n");
        printf("Sua escolha: ");
        scanf("%d", &direcao);

        printf("\n--- Movimentando a Rainha por %d casas ---\n", numeroDePassos);
        moverRainhaRecursiva(numeroDePassos, direcao);
        break;

    // =================================================================
    // CASO 4: LÓGICA DO CAVALO (com Loops Complexos)
    // =================================================================
    case 4:
        printf("Voce escolheu o CAVALO.\n");
        printf("\nREGRAS DO CAVALO: Move-se em 'L'. Escolha o movimento unico:\n");
        printf("1. 2 Cima, 1 Direita | 2. 2 Cima, 1 Esquerda\n");
        printf("3. 2 Baixo, 1 Direita | 4. 2 Baixo, 1 Esquerda\n");
        printf("5. 2 Direita, 1 Cima  | 6. 2 Direita, 1 Baixo\n");
        printf("7. 2 Esquerda, 1 Cima | 8. 2 Esquerda, 1 Baixo\n");
        printf("Sua escolha: ");
        scanf("%d", &direcao);

        printf("\n--- Decompondo o movimento do Cavalo ---\n");

        int movimentoCompleto = 1; // Flag para executar o movimento em 'L' uma única vez
        while (movimentoCompleto--)
        {
            switch (direcao)
            {
            case 1:
                for (int k = 0; k < 2; k++)
                {
                    printf("Cima\n");
                }
                printf("Direita\n");
                break;
            case 2:
                for (int k = 0; k < 2; k++)
                {
                    printf("Cima\n");
                }
                printf("Esquerda\n");
                break;
            case 3:
                for (int k = 0; k < 2; k++)
                {
                    printf("Baixo\n");
                }
                printf("Direita\n");
                break;
            case 4:
                for (int k = 0; k < 2; k++)
                {
                    printf("Baixo\n");
                }
                printf("Esquerda\n");
                break;
            case 5:
                for (int k = 0; k < 2; k++)
                {
                    printf("Direita\n");
                }
                printf("Cima\n");
                break;
            case 6:
                for (int k = 0; k < 2; k++)
                {
                    printf("Direita\n");
                }
                printf("Baixo\n");
                break;
            case 7:
                for (int k = 0; k < 2; k++)
                {
                    printf("Esquerda\n");
                }
                printf("Cima\n");
                break;
            case 8:
                for (int k = 0; k < 2; k++)
                {
                    printf("Esquerda\n");
                }
                printf("Baixo\n");
                break;
            default:
                printf("Movimento invalido para o Cavalo!\n");
                break;
            }
        }
        break;

    // =================================================================
    // CASO PADRÃO: ESCOLHA INVÁLIDA
    // =================================================================
    default:
        printf("Opcao invalida! Por favor, escolha um numero entre 1 e 4.\n");
        break;
    }

    printf("---------------------------------------\n");
    printf("Programa finalizado.\n");

    return 0;
}