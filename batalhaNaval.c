void nivel_aventureiro() {
    printf("==== BATALHA NAVAL - NÍVEL AVENTUREIRO ====\n");
    int tabuleiro[10][10];
    memset(tabuleiro, 0, sizeof(tabuleiro));

    // Navio vertical
    for (int i = 2; i < 7; i++) tabuleiro[i][1] = 3;
    // Navio horizontal
    for (int i = 4; i < 9; i++) tabuleiro[7][i] = 3;
    // Navio diagonal principal (\)
    for (int i = 0; i < 5; i++) tabuleiro[i][i] = 3;
    // Navio diagonal secundária (/)
    for (int i = 0; i < 5; i++) tabuleiro[i][9-i] = 3;

    printf("Tabuleiro (0 = vazio, 3 = navio):\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            printf("%d ", tabuleiro[i][j]);
        printf("\n");
    }
    printf("\n");
}

/*
 * NÍVEL MESTRE
 * Matrizes de habilidades: cone, cruz, octaedro.
 * Os padrões são exibidos em matrizes 5x5.
 */

// Cone: base na linha inferior, topo no centro
void habilidade_cone() {
    int matriz[5][5] = {0};
    for (int i = 0; i < 5; i++) // base
        matriz[4][i] = 1;
    matriz[3][1] = matriz[3][2] = matriz[3][3] = 1;
    matriz[2][2] = 1;
    matriz[1][2] = 1;
    matriz[0][2] = 1;

    printf("Cone:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
    printf("\n");
}

// Octaedro: losango central
void habilidade_octaedro() {
    int matriz[5][5] = {0};
    matriz[0][2] = 1;
    matriz[1][1] = matriz[1][2] = matriz[1][3] = 1;
    matriz[2][2] = 1;
    matriz[3][1] = matriz[3][2] = matriz[3][3] = 1;
    matriz[4][2] = 1;

    printf("Octaedro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
    printf("\n");
}

// Cruz: linha central e coluna central
void habilidade_cruz() {
    int matriz[5][5] = {0};
    for (int i = 0; i < 5; i++) {
        matriz[2][i] = 1;
        matriz[i][2] = 1;
    }

    printf("Cruz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
    }
    printf("\n");
}
