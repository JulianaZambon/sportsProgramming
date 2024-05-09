#include <stdio.h>
#include <math.h>

// a = m2 - n2, b = 2mn, c = m2 + n2.

int main() {
 
    //A entrada consiste de uma linha com dois inteiros m, n nessa ordem. É garantido que 1 ≤ n < m ≤ 104.

    //Saída Uma única linha com os inteiros a, b e c separados por espaço.

    int m, n;
    scanf("%d %d", &m, &n);

    int a = pow(m, 2) - pow(n, 2);
    int b = 2 * m * n;
    int c = pow(m, 2) + pow(n, 2);

    printf("%d %d %d\n", a, b, c);

    return 0;
}