#include <bits/stdc++.h>
using namespace std;

/* Alex acha que um array é bom se existir algum elemento que possa ser representado como a soma
de todos os outros elementos (a soma de todos os outros elementos é 0 se não houver outros elementos). Por exemplo,
o array [1,6,3,2] é bom, pois 1+3+2=6. Além disso, o array [0] também é bom. No entanto, os arrays [1,2,3,4] e [1]
não são bons.

Alex tem um array a1,a2,…,an. Ajude-o a contar o número de prefixos não vazios bons do array a.
Em outras palavras, conte o número de inteiros i (1≤i≤n) tal que o prefixo de comprimento i (ou seja, a1,a2,…,ai) é bom. */

/* entrada:
A primeira linha da entrada contém um único inteiro t
(1≤t≤10^4) — o número de casos de teste.
A primeira linha de cada caso de teste contém um único inteiro n
(1≤n≤2⋅10^5) — o número de elementos no array.
A segunda linha de cada caso de teste contém n
inteiros a1,a2,…,an (0≤ai≤10^9) — os elementos do array.
É garantido que a soma de n
em todos os casos de teste não excede 2⋅10^5 */

/* saída: Para cada caso de teste, imprima um único inteiro — o número de prefixos não vazios bons do array */

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; // a primeira linha da entrada contém um único inteiro t
    cin >> t;

    while (t--) {
        int n; // a primeira linha de cada caso de teste contém um único inteiro n
        cin >> n;

        vector<int> a(n); // a segunda linha de cada caso de teste contém n inteiros a1,a2,…,an
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int good_prefixes = 0; // conta o número de prefixos não vazios bons do array
        long long sum = 0;
        int max_value = 0;

        // verifica se o prefixo é bom
        for (int i = 0; i < n; i++) {
            sum += a[i];
            max_value = max(max_value, a[i]); // encontra o valor máximo no prefixo

            if (max_value == sum - max_value) { // se o valor máximo for igual à soma de todos os outros elementos
                good_prefixes++; // incrementa a contagem de prefixos bons
            }
        }

        cout << good_prefixes << endl;
    }

    return 0;
}
