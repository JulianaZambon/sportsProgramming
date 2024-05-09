
 
    /**
    A primeira linha de entrada contém um inteiro n (1 ≤ n ≤ 100).
    Daí segue n linhas, cada uma no formato "Time t +k" (sem as aspas), 
    que indica que o Time t fez uma cesta de k pontos (t em {1, 2}, k em {1, 2, 3}).
     */
 
    /*Imprima uma linha no formato "p1 x p2" (sem as aspas), em que p1 representa a pontuação 
    do Time 1 e p2 representa a pontuação do Time 2. Note que há um espaço antes e um espaço depois do x.
    Adicione uma quebra de linha ao final de sua resposta.*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int p1 = 0, p2 = 0; // Inicialização das pontuações dos times 1 e 2.

    for (int i = 0; i < n; i++) {
        char label[10]; // Array de caracteres para ler a string "Time"
        int t, k; // Variáveis para armazenar o time e a quantidade de pontos da cesta.
        scanf("%s %d +%d", label, &t, &k); // Lendo o formato "Time t +k"

        if (t == 1) { // Se o time for o 1, adiciona os pontos à pontuação do time 1.
            p1 += k;
        } else if (t == 2) { // Se o time for o 2, adiciona os pontos à pontuação do time 2.
            p2 += k;
        } 
    }

    // Imprime o resultado no formato "p1 x p2", com um espaço antes e depois de "x".
    printf("%d x %d\n", p1, p2);

    return 0;
}

