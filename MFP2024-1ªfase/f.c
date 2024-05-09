#include <stdio.h>
 
int main() {
 
    /*
    Vitória na programação - 8 pontos
    Vitória no vôlei - 4 pontos
    Vitória no futebol - 2 pontos
    Vitória na corrida  - 1 ponto
    */

   //A entrada é um número N (1 ≤ N ≤ 15) a soma dos pontos retornados por Sonic.

    int n;
    scanf("%d", &n);

    //A saída deve ser um número inteiro contendo a quantidade de modalidades que o país de Amy ganhou

    int count = 0;
    if (n >= 8) {
        count++;
        n -= 8;
    }
    if (n >= 4) {
        count++;
        n -= 4;
    }
    if (n >= 2) {
        count++;
        n -= 2;
    }
    if (n >= 1) {
        count++;
        n -= 1;
    }

    printf("%d\n", count);
    

 
    return 0;
}